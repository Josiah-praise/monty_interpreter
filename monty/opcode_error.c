#include "monty.h"

void opcode_error()
{
    dprintf(2, "L%d: unknown instruction %s\n", arguments.line_number, arguments.token_array[0]);
    free_token_array();
    fclose(arguments.fp);
    free_stack();
	exit(EXIT_FAILURE);
}