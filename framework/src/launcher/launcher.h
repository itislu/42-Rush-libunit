/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 21:18:52 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHER_H
# define LAUNCHER_H

typedef enum e_result
{
	TEST_OK,
	TEST_KO,
	TEST_SIGSEGV,
	TEST_SIGBUS,
	TEST_SIGOTHER,
}	t_result;

t_result	get_child_status(int status);
void		prt_test_result(const char *collection, const char *test_name,
				t_result test_result);

#endif
