#include "monty.h"

/**
 * myRotl - rotates the stack to the top
 * @start: A pointer to the head of the stack
 * @iterator: The line number where the opcode appears
 */
void myRotl(stack_t **start, unsigned int iterator)
{
stack_t *first, *last;

if (*start == NULL || (*start)->next == NULL)
return;

first = *start;
last = first;

while (last->next != NULL)
last = last->next;

*start = first->next;
(*start)->prev = NULL;

first->next = NULL;
first->prev = last;
last->next = first;
(void)iterator;
}
