#include "monty.h"


void pall(__attribute__((unused)) stack_t **stack,
		 __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp;

	if (arguments.stack_length == 0)
		return;

	tmp = arguments.top;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}

}
