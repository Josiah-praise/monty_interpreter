#include "monty.h"

void malloc_error()
{
    dprintf(2, "Error: malloc failed\n");
    fclose(arguments.fp);
	exit(EXIT_FAILURE);
}