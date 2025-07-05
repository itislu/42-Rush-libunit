#include "launchers.h"
#include "libft/ft_printf.h"
#include "libunit.h"

int main(void)
{
    ft_printf("Running all tests...\n");

    t_libunit *libunit;

    KO_launcher();
    OK_launcher();
    SIGBUS_launcher();
    SIGSEGV_launcher();
    // libunit print total results (libunit struct)
}
