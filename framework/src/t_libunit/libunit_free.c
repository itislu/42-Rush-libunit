#include "libft/libft.h"
#include "libunit.h"
#include "t_libunit.h"
#include "t_unit_test.h"

void	libunit_free(t_libunit **libunit)
{
	if (libunit == NULL || *libunit == NULL)
		return ;
	ft_lstclear(&(*libunit)->tests, unit_test_free);
	ft_free_and_null((void **)libunit);
}
