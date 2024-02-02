#include "monty.h"

/**
 * myPint - prints the top of the stack
 * @start: head of the stack
 * @iterator: line number count
 *
 */
void myPint(stack_t **start, unsigned int iterator)
{
	if (*start == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", iterator);
		fclose(mont.myfile);
		free(mont.subjects);
		free_allstacks(*start);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*start)->n);
}
