#include "monty.h"

void free_stack()
{
    stack_t *current = bottom;
    stack_t *nextNode;

    /* Traverse the list and free each node*/
    while (current != NULL) {
        nextNode = current->next;  /*Save the next node before freeing the current one */
        free(current);
        current = nextNode;  /*Move to the next node*/
    }
}