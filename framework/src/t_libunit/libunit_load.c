#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "libunit.h"
#include "t_libunit.h"
#include "t_unit_test.h"
#include <stdbool.h>
#include <unistd.h>

static bool	load(t_libunit *libunit, const char *name, int (*func)(void));

bool	libunit_load(t_libunit *libunit, const char *name, int (*func)(void))
{
	if (libunit == NULL)
		return (false);
	if (!load(libunit, name, func))
	{
		libunit->state = STATE_ERROR;
		ft_dprintf(STDERR_FILENO, "ERROR: Failed to load test %s:%s\n", 
			libunit->name, name);
		return (false);
	}
	return (true);
}

static bool	load(t_libunit *libunit, const char *name, int (*func)(void))
{
	t_unit_test	*unit_test;

	unit_test = unit_test_new(name, func);
	if (unit_test == NULL)
		return (false);
	if (!ft_lstnew_back(&libunit->tests, unit_test))
	{
		unit_test_free(unit_test);
		return (false);
	}
	return (true);
}
