#include "monty.h"

mont_t mont = {NULL, NULL, NULL, 0};

/**
 * main - Entry point
 * @ac: argument count
 * @av: file location
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	char *subjects;
	FILE *myfile;
	ssize_t line = 1;
	size_t mysize = 0;
	stack_t *stack = NULL;
	unsigned int iterator = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	myfile = fopen(av[1], "r");
	mont.myfile = myfile;  /* global var updated with file pointer */

	if (!myfile)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while (line > 0)
	{
		subjects = NULL;
		line = getline(&subjects, &mysize, myfile);
		mont.subjects = subjects;
		iterator++;

		if (line > 0)
		{
			run(subjects, &stack, iterator, myfile);
		}
		free(subjects);
	}
	free_allstacks(stack);
	fclose(myfile);

	return (0);
}
