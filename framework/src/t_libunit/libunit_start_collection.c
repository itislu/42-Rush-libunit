#include "t_libunit.h"

void	libunit_start_collection(t_libunit *libunit, const char *name)
{
	if (libunit == NULL)
		return ;
	libunit->name = name;
	libunit->tests = NULL;
}
