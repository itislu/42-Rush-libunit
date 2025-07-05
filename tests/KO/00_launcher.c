#include "libft/ft_printf.h"
#include "libunit.h"
#include "tests.h"

// #ifdef TEST_KO
int KO_launcher(t_libunit *libunit)
{
    ft_printf("KO_launcher...\n");

    libunit_init(libunit, "KO");
    libunit_load(libunit, "Minus one", minus_one);
    libunit_load(libunit, "One", one);
    return (0);
}
//  else
// int KO_launcher(void)
// {
//     return (0);
// }
// #endif


/*
    t_libunit
        int     n_tests;
        int     n_succ;
        char    *collection; // init with NULL -- collection can do  = "strlen"
        t_list  *tests;

    main
        t_libunit whatever

        KO_Launcher(*whatever);
    
    KO_Launcher
        whatever->collection = "stlen"
        libunit.....

    libunit launcher
            local counter for total & success
        do all tasks
        whatever->collection = NULL
        list clear all tests
*/
