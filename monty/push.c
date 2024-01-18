#include "monty.h"

void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    stack_t *node;
    /*create a new node*/
    /*check if stack_length is 0.
    if stack_length is 0, bottom should point to the stack same as
    top.
    */
   /*increament stack_length by 1*/
   node = create_node();
   if (arguments.stack_length == 0) /*in the case that the stack has no nodes*/
   {
        *stack = node;
        arguments.bottom = node;
   }
   else
   {
        node->prev = *stack;
        (*stack)->next = node;
        *stack = node; /*updating the top pointer*/
   }
   arguments.stack_length++;
}