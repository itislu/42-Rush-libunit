#include "libunit.h"
#include "t_libunit.h"
#include "utils/utils.h"
#include <unistd.h>

// Prints the summary and frees libunit
int	libunit_finish(t_libunit **libunit)
{
	int	result;

	if (libunit == NULL || *libunit == NULL)
		return (-1);
	if ((*libunit)->total.n_success == (*libunit)->total.n_tests)
		result = 0;
	else
		result = -1;
	prt_total_stats(&(*libunit)->total, "SUMMARY");
	libunit_free(libunit);
	return (result);
}
