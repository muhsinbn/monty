#include "monty.h"

/**
 * myPush - pushes an element into the stack
 * @start: A pointer to the head of stack
 * @iterator: line where opcodes appears
 */

void myPush(stack_t **start, unsigned int iterator)
{
	char *arguments = mont.av;
	stack_t *new;
	int val;

	if (!arguments)
	{
		fprintf(stderr, "L%d: usage: push integer\n", iterator);
		fclose(mont.myfile);
		free(mont.subjects);
		free_allstacks(*start);
		exit(EXIT_FAILURE);
	}
	/*val = atoi(arguments);*/
	new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(mont.myfile);
		free(mont.subjects);
		free_allstacks(*start);
		exit(EXIT_FAILURE);
	}
	new->n = val;
	new->prev = NULL;

	if (*start)
	{
		new->next = *start;
		(*start)->prev = new;
	}
	else
	{
		new->next = NULL;
	}
	*start = new;
}


#include "monty.h"

/**
 * myPall - prints the stack
 * @start: head of the stack
 * @iterator: counter not  used
 * Return: nothing to return
 */
void myPall(stack_t **start, unsigned int iterator)
{
	stack_t *st;
	(void)iterator;

	st = *start;
	if (st == NULL)
		return;

	while (st)
	{
		printf("%d\n", st->n);
		st = st->next;
	}
}
