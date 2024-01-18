#ifndef _MONTY_H
#define _MONTY_H
#define MAX 1000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>


/*===============================Structs=================================================================*/
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct argument_s
{
FILE *fp;
char line[MAX];
char filename[MAX];
char *token_array[MAX];
unsigned int comment;
unsigned int line_number;
void (*opcode_function)(stack_t **stack, unsigned int line_number);
stack_t *top;
unsigned int stack_length;
unsigned int stack_flag;
stack_t *bottom;
} argument_t;
/*===============================Structs=================================================================*/




/*======================Global Variables===========================*/
extern argument_t arguments;
/*======================Global Variables===========================*/




/*=======================prototypes================================*/
stack_t *create_node();
void push(stack_t **stack, unsigned int line_number);
void check_args(int argc);
void usage_error();
void open_file();
void cant_open_error();
void set_filename_arg(char **argv);
void tokenize();
void free_token_array();
void fill_token_array(char *buffer, char *token);
void malloc_error();
void print_token_array(char **token_array);
void validate_opcode();
void opcode_error();
void execute_opcode_function();
void free_stack();
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void initialize_arguments();
/*=======================prototypes================================*/


#endif /*_MONTY_H*/