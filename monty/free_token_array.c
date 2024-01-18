#include "monty.h"

void free_token_array()
{
    int i = 0;

    while (token_array[i] != NULL)
    {
        free(token_array[i]);
        i++;
    }
    token_array[0] = NULL;
}