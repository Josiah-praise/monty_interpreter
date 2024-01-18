#include "monty.h"

void open_file()
{
    fp = fopen(filename, "r");

    if (fp == NULL)
        cant_open_error();
}