#include "launchers.h"
#include "libft/ft_printf.h"

int main(void)
{
    ft_printf("Running all tests...\n");

    KO_launcher();
    OK_launcher();
    SIGBUS_launcher();
    SIGSEGV_launcher();
}
