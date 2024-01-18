#include "monty.h"

void print_token_array(char **token_array)
{
    int i = 0;

    while (token_array[i] != 0)
    {
        printf("token: %s\n", token_array[i]);
        i++;
    }
}