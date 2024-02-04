#include "monty.h"

/**
 * myRotr - rotates the stack to the bottom
 * @start: A pointer to the head of the stack
 * @iterator: The line number where the opcode appears
 */
void myRotr(stack_t **start, unsigned int iterator)
{
stack_t *last, *secondLast;

if (*start == NULL || (*start)->next == NULL)
return;

last = *start;
secondLast = last;

while (last->next != NULL)
{
secondLast = last;
last = last->next;
}

secondLast->next = NULL;
last->prev = NULL;
last->next = *start;
(*start)->prev = last;
*start = last;
(void)iterator;
}
