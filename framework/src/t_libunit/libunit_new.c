
#include "libft/libft.h"
#include "t_libunit/libunit.h"

t_libunit   *libunit_new(void)
{
    return ft_calloc(1, sizeof(t_libunit));
}
