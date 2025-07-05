#include "libft/ft_printf.h"
#include "libunit.h"
#include "t_libunit.h"

// Prints the summary and frees libunit
int	libunit_finish(t_libunit **libunit)
{
	int	result;

	if ((*libunit)->total.n_success == (*libunit)->total.n_tests)
		result = 0;
	else
		result = -1;
	ft_printf("%u/%u tests passed\n",
		(*libunit)->total.n_success, (*libunit)->total.n_tests);
	libunit_free(libunit);
	return (result);
}
