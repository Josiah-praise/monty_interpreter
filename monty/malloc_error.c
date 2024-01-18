#include "monty.h"

void malloc_error()
{
    dprintf(2, "Error: malloc failed\n");
    fclose(fp);
	exit(EXIT_FAILURE);
}