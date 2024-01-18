#include "monty.h"

void execute_opcode_function(void)
{
	arguments.opcode_function(&(arguments.top), arguments.line_number);
}
