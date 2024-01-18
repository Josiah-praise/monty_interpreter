#include "monty.h"

/*Global Varibles*/
char line[MAX];
FILE *fp;
char filename[MAX];
unsigned int line_number;
char *token_array[MAX];
instruction_t instructions[] = {
        {"push", &push},
        {"pall", &pall},
        {"pint", &pint},
        {"pop", &pop},
		{NULL, NULL}
	};
unsigned int comment;
unsigned int line_number = 1;
void (*opcode_function)(stack_t **stack, unsigned int line_number);
stack_t *top = NULL;
stack_t *bottom = NULL;
unsigned int stack_flag = 1; /*if 1, act as stack, if 0, act as queue*/
unsigned int stack_length = 0;

int main(int argc, char **argv)
{
    check_args(argc);
    set_filename_arg(argv);
    open_file();

    while (fgets(line, MAX, fp) != NULL)
    {
        tokenize();
        validate_opcode();
        if (comment)
        {
            free_token_array();
            comment = 0;
            line_number++;
            continue;
        }
        execute_opcode_function();

        free_token_array();
        line_number++;
    }
    free_stack();
    free_token_array();
    fclose(fp);
    return (0);
}