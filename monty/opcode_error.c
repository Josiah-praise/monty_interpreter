#include "monty.h"

void opcode_error()
{
    dprintf(2, "L%d: unknown instruction %s\n", line_number, token_array[0]);
    free_token_array();
    fclose(fp);
    free_stack();
	exit(EXIT_FAILURE);
}