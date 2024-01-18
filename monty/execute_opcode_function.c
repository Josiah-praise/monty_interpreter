#include "monty.h"

void execute_opcode_function()
{
    arguments.opcode_function(&(arguments.top), arguments.line_number);
}