#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "libunit_bonus.h"
#include "t_libunit_bonus.h"
#include "t_unit_test_bonus.h"
#include <stdbool.h>
#include <unistd.h>

static bool	handle_load(t_libunit *libunit, const char *name, int (*func)(void),
				const char *expected_output);
static bool	load(t_libunit *libunit, const char *name, int (*func)(void),
				const char *expected_output);

bool	libunit_load(t_libunit *libunit, const char *name, int (*func)(void))
{
	return (handle_load(libunit, name, func, NULL));
}

bool	libunit_load_stdout(t_libunit *libunit, const char *name, 
			int (*func)(void), const char *expected_output)
{
	return (handle_load(libunit, name, func, expected_output));
}

static bool	handle_load(t_libunit *libunit, const char *name, int (*func)(void),
				const char *expected_output)
{
	if (libunit == NULL)
		return (false);
	if (!load(libunit, name, func, expected_output))
	{
		libunit->state = STATE_ERROR;
		ft_dprintf(STDERR_FILENO, "ERROR: Failed to load test %s:%s\n", 
			libunit->name, name);
		return (false);
	}
	return (true);
}

static bool	load(t_libunit *libunit, const char *name, int (*func)(void),
				const char *expected_output)
{
	t_unit_test	*unit_test;
	t_test_type	type;

	if (expected_output != NULL)
		type = TYPE_STDOUT;
	else
		type = TYPE_BASIC;
	unit_test = unit_test_new(name, func, type, expected_output);
	if (unit_test == NULL)
		return (false);
	if (!ft_lstnew_back(&libunit->tests, unit_test))
	{
		unit_test_free(unit_test);
		return (false);
	}
	return (true);
}
