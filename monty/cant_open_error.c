#include "monty.h"

void cant_open_error(void)
{
	dprintf(2, "Error: Can't open file %s\n", arguments.filename);
	exit(EXIT_FAILURE);
}
