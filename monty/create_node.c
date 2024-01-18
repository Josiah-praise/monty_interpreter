#include "monty.h"

void push_error()
{
    dprintf(2, "L%d: usage: push integer\n", line_number);
    free_token_array();
    fclose(fp);
    free_stack();
	exit(EXIT_FAILURE);
}

stack_t *create_node()
{
    stack_t *node;

    node = malloc(sizeof(stack_t));

    if (node == NULL)
    {
        free_token_array();
        free_stack();
        malloc_error();
    }
    if (token_array[1] == NULL || atoi(token_array[1]) == 0)
    {
        free(node);
        push_error();
    }
        
    node->n = atoi(token_array[1]);
    node->next = node->prev = NULL;
    return (node);
}