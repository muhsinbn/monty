#include "monty.h"

/**
 * myPop - removes the top element from the stack
 * @start: A pointer to the head of the stack
 * @iterator: line number where the opcodes appear
 *
 */
void myPop(stack_t **start, unsigned int iterator)
{
	stack_t *tmp;

	if (*start == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", iterator);
		fclose(mont.myfile);
		free(mont.subjects);
		free_allstacks(*start);
		exit(EXIT_FAILURE);
	}
	tmp = *start;
	if (tmp->next != NULL)
	{
		*start = tmp->next;
		(*start)->prev = NULL;
	}
	else
	{
		*start = NULL;
	}
	free(tmp);
}
