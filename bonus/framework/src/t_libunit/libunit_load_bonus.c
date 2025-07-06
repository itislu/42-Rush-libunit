#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "libunit_bonus.h"
#include "t_libunit_bonus.h"
#include "t_unit_test_bonus.h"
#include <stdbool.h>
#include <stdlib.h>
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
