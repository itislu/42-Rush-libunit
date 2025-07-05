#include "launchers.h"
#include "libft/ft_printf.h"
#include "libunit.h"

int main(void)
{
    ft_printf("Running all tests...\n");

    t_libunit *libunit;

    libunit = libunit_new();
    KO_launcher(libunit);
    OK_launcher(libunit);
    SIGBUS_launcher(libunit);
    SIGSEGV_launcher(libunit);

    // libunit print total results (libunit struct)
    return (libunit_finish(&libunit));
}
