#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct mont_s - variables arguments, file, and contents
 * @av: pointer to a char, representing the value
 * @myfile: pointer to a file structure representing a file
 * @subjects: pointer to a char, representing contents
 * @flgs: integer flag, indicating a change in stack or queue
 */
typedef struct mont_s
{
	char *av;
	FILE *myfile;
	char *subjects;
	int flgs;
} mont_t;

extern mont_t mont;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void myPush(stack_t **start, unsigned int iterator);
void myPall(stack_t **start, unsigned int iterator);
void myPint(stack_t **start, unsigned int iterator);
void myPop(stack_t **start, unsigned int iterator);
void mySwap(stack_t **start, unsigned int iterator);
void myAdd(stack_t **start, unsigned int iterator);
void mySub(stack_t **start, unsigned int iterator);
void myDiv(stack_t **start, unsigned int iterator);
void myMul(stack_t **start, unsigned int iterator);
void myMod(stack_t **start, unsigned int iterator);
void myPchar(stack_t **start, unsigned int iterator);
void myPstr(stack_t **start, unsigned int iterator);
void myNop(stack_t **start, unsigned int iterator);
void myRotl(stack_t **start, unsigned int iterator);
void myRotr(stack_t **start, unsigned int iterator);
void myStack(stack_t **start, unsigned int iterator);
void myQueue(stack_t **start, unsigned int iterator);
void free_allstacks(stack_t *start);
int run(char *subjects, stack_t **stack, unsigned int iterator, FILE *myfile);


#endif
