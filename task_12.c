#include "monty.h"

/**
 * myPstr - prints the string starting at the top of the stack
 * followed by a new line
 * @start: A pointer to the head of the stack
 * @iterator: The line number where the opcode appears
 */
void myPstr(stack_t **start, unsigned int iterator)
{
	stack_t *current = *start;

	while (current != NULL && current->n != 0
	&& (current->n >= 0 && current->n <= 127))
	{
	putchar(current->n);
	current = current->next;
	}
	putchar('\n');
	(void)iterator;
}
