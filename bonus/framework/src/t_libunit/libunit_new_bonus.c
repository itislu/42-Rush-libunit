#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "utils/utils_bonus.h"
#include "t_libunit_bonus.h"
#include <unistd.h>

t_libunit	*libunit_new(void)
{
	t_libunit	*libunit;

	libunit = ft_calloc(1, sizeof(t_libunit));
	if (libunit == NULL)
		ft_dprintf(STDERR_FILENO, "ERROR: Failed to allocate libunit\n");
	prt_test_start();
	return (libunit);
}
