#include "monty.h"

/**
 * free_allstacks - frees the linked list
 * @start: head of the stack
 *
 */
void free_allstacks(stack_t *start)
{
	stack_t *tmp;

	tmp = start;
	while (start)
	{
		tmp = start->next;
		free(start);
		start = tmp;
	}
}
