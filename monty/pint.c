#include "monty.h"

void pint_error()
{
    dprintf(2, "L%d: can't pint, stack empty\n", line_number);
    free_token_array();
    fclose(fp);
    free_stack();
	exit(EXIT_FAILURE);
}

void pint(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    if (top == NULL)
        pint_error();
    printf("%d\n", (*stack)->n);
}