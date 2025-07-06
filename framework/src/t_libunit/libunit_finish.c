#include "libunit.h"
#include "t_libunit.h"
#include "utils/utils.h"
#include <unistd.h>

// Prints the summary and frees libunit
int	libunit_finish(t_libunit **libunit)
{
	int	ret_val;

	if (libunit == NULL || *libunit == NULL)
		return (STATE_ERROR);
	ret_val = (*libunit)->state;
	prt_total_stats(&(*libunit)->total, "SUMMARY");
	libunit_free(libunit);
	return (ret_val);
}
