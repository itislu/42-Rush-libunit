/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 15:50:08 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHER_BONUS_H
# define LAUNCHER_BONUS_H

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
