#include "monty.h"


void pall(__attribute__((unused)) stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    stack_t *tmp;

    if (stack_length == 0)
        return;
    
    tmp = top;

    while (tmp)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->prev;
    }

}