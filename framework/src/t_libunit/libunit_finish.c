#include "libunit.h"
#include "t_libunit.h"
#include "utils/utils.h"
#include <unistd.h>

// Prints the summary and frees libunit
t_state	libunit_finish(t_libunit **libunit)
{
	t_state	end_state;

	if (libunit == NULL || *libunit == NULL)
		return (STATE_ERROR);
	end_state = (*libunit)->state;
	prt_total_stats(&(*libunit)->total, "SUMMARY");
	libunit_free(libunit);
	return (end_state);
}
