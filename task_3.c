#include "monty.h"

/**
 * mySwap - swaps the top two elements of the stack
 * @start: a pointer to the head of the stack
 * @iterator: line number where the opcodes appear
 *
 */
void mySwap(stack_t **start, unsigned int iterator)
{
	int tmp;

	if (*start == NULL || (*start)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
				iterator);
		fclose(mont.myfile);
		free(mont.subjects);
		free_allstacks(*start);
		exit(EXIT_FAILURE);
	}
	tmp = (*start)->n;
	(*start)->n = (*start)->next->n;
	(*start)->next->n = tmp;
}
