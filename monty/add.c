#include "monty.h"

void add_error()
{
    dprintf(2, "L%d: can't add, stack too short\n", arguments.line_number);
    free_token_array();
    fclose(arguments.fp);
    free_stack();
	exit(EXIT_FAILURE);
}

void add(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    if (arguments.stack_length < 2)
        add_error();
    (*stack)->prev->n += (*stack)->n;
    *stack = (*stack)->prev;
    free((*stack)->next);
    (*stack)->next = NULL;
    arguments.stack_length--;
}