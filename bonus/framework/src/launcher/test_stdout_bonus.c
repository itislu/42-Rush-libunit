/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stdout_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:13:25 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 19:56:35 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launcher_bonus.h"
#include "libunit_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "t_libunit/t_unit_test_bonus.h"
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

static void		child(t_unit_test *test, t_libunit *libunit, int pipe_fd[2]);
static t_result	test_fd_content_match(int fd, const char *expected_output);

// Returns false if fork etc failed
bool	test_stdout(t_unit_test *test, t_result *test_result,
			t_libunit *libunit)
{
	int			pid;
	int			pipe_fd[2];
	t_result	stdout_result;

	if (pipe(pipe_fd) == -1)
		return (false);
	pid = fork();
	if (pid == -1)
		return (close(pipe_fd[0]), close(pipe_fd[1]), false);
	if (pid == 0)
		child(test, libunit, pipe_fd);
	close(pipe_fd[1]);
	stdout_result = test_fd_content_match(pipe_fd[0], test->expected_output);
	close(pipe_fd[0]);
	*test_result = get_child_status();
	if (*test_result == TEST_ERROR || stdout_result == TEST_ERROR)
		return (false);
	if (*test_result == TEST_OK && stdout_result == TEST_KO)
		*test_result = TEST_KO;
	return (true);
}

static void	child(t_unit_test *test, t_libunit *libunit, int pipe_fd[2])
{
	int	(* const func)(void) = test->func;
	int	status;
	const unsigned	timeout = libunit->timeout;

	close(pipe_fd[0]);
	status = dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[1]);
	libunit_free(&libunit);
	if (status == -1)
		exit(TEST_ERROR);
	alarm(timeout);
	status = func();
	close(STDOUT_FILENO);
	exit(status);
}

static t_result	test_fd_content_match(int fd, const char *expected_output)
{
	const size_t	buffer_size = 4096;
	char			buffer[buffer_size];
	ssize_t			bytes_read;
	size_t			total_bytes_read;
	t_result		test_result;

	total_bytes_read = 0;
	test_result = TEST_OK;
	while (true)
	{
		bytes_read = read(fd, buffer, buffer_size - 1);
		if (bytes_read == -1)
			return (TEST_ERROR);
		if (bytes_read == 0)
			return (test_result);
		buffer[bytes_read] = '\0';
		if (test_result == TEST_OK
			&& strcmp(buffer, &expected_output[total_bytes_read]) != 0)
			test_result = TEST_KO;
		total_bytes_read += bytes_read;
	}
}
