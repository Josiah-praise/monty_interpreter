#include "monty.h"

void open_file()
{
    arguments.fp = fopen(arguments.filename, "r");

    if (arguments.fp == NULL)
        cant_open_error();
}