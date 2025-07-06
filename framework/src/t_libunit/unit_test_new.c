#include "libft/libft.h"
#include "t_unit_test.h"
#include <stdbool.h>

t_unit_test	*unit_test_new(const char *name, int (*func)(void))
{
	t_unit_test	*unit_test;
	
	unit_test = ft_calloc(1, sizeof(t_unit_test));
	if (unit_test == NULL)
		return (NULL);
	unit_test->name = name;
	unit_test->func = func;
	return (unit_test);
}
