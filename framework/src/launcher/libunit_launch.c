#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit/unit_test.h"
#include <stdbool.h>

static bool	launch_test(t_unit_test	*test);

/*
    libunit test launcher

        while test node
            fork
            if child run test
            if parent
                wait
                get result
                print result
                update struct success counter
            next node
        print collection result
        update total results in libunit struct

*/

int	libunit_launch(t_list **tests)
{
	t_list	*cur;
	int		result;

	result = 0;
	cur = *tests;
	while (cur != NULL)
	{
		launch_test(cur->content);
		cur = cur->next;
	}
	ft_lstclear(tests, unit_test_free);
	// Print how many successes
	return (0);
}

// Returns false if fork etc failed
static bool	launch_test(t_unit_test	*test)
{
	const int	result = test->func();

	if (result == 0)
	{
		ft_printf("const char *format, ...");
	}
	return (true);
}
