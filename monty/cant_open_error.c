#include "monty.h"

void cant_open_error()
{
    dprintf(2, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}