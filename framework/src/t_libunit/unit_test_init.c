#include "t_unit_test.h"
#include <stdbool.h>

void	unit_test_init(t_unit_test *unit_test, const char *name, int (*func)(void))
{
	unit_test->name = name;
	unit_test->func = func;
}
