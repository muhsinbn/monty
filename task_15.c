#include "monty.h"

/**
 * myQueue - sets the format of the data to a queue (FIFO)
 * @start: A pointer to the head of the stack
 * @iterator: The line number where the opcode appears
 */
void myQueue(stack_t **start, unsigned int iterator)
{
stack_t *next, *current = *start;
stack_t *newStart = NULL;

(void)iterator;
mont.flgs = 1;
if (current == NULL || current->next == NULL)
return;
newStart = malloc(sizeof(stack_t));
if (newStart == NULL)
printf("Error\n");
while (current->next != NULL)
current = current->next;

while (current != NULL)
{
next = current->prev;
current->prev = newStart;
current->next = next;
newStart = current;
current = next;
}

*start = newStart;
}

/**
 * myStack - sets the format of the data to a stack (LIFO)
 * @start: A pointer to the head of the stack
 * @iterator: The line number where the opcode appears
 */
void myStack(stack_t **start, unsigned int iterator)
{
(void)iterator;
(void)start;
mont.flgs = 0;
}
