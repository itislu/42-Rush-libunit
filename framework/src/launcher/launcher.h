/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 18:47:53 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHER_H
# define LAUNCHER_H

typedef enum e_result
{
	R_OK,
	R_KO,
	R_SIGSEGV,
	R_SIGBUS,
	R_SIGOTHER,
	R_ERR_FORK
}	t_result;

t_result	get_child_status(int status);
void		prt_test_result(const char *collection, const char *test_name,
				t_result test_result);

#endif
