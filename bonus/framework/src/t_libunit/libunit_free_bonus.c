#include "libft/libft.h"
#include "libunit_bonus.h"
#include "t_libunit_bonus.h"
#include "t_unit_test_bonus.h"

void	libunit_free(t_libunit **libunit)
{
	if (libunit == NULL || *libunit == NULL)
		return ;
	ft_lstclear(&(*libunit)->tests, unit_test_free);
	ft_free_and_null((void **)libunit);
}
