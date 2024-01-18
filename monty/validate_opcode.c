#include "monty.h"

void validate_opcode()
{
    int i = 0;
    int found = 0;

    if (token_array[0] == NULL || *(token_array[0]) == '#')
    {
        comment = 1;
        return;
    }

    while (instructions[i].opcode != NULL)
    {
        if (strcmp(instructions[i].opcode, token_array[0]) == 0)
        {
            found = 1;
            opcode_function = instructions[i].f;
            break;
        }
        i++;
    }
    if (!found)
        opcode_error();
}