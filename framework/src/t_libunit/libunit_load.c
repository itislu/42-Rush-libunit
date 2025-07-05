#include "libft/libft.h"
#include "libunit.h"
#include "unit_test.h"
#include <stdlib.h>

bool	libunit_load(t_libunit *libunit, const char *name, int (*func)(void))
{
	t_unit_test	*unit_test;

	unit_test = ft_calloc(1, sizeof(t_unit_test));
	if (unit_test == NULL)
		return (false);
	unit_test_init(unit_test, name, func);
	if (!ft_lstnew_back(&libunit->tests, unit_test))
	{
		free(unit_test);
		return (false);
	}
	return (true);
}
