#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *stuff;
	FILE *folder;
	size_t vast = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty folder\n");
		exit(EXIT_FAILURE);
	}
	folder = fopen(argv[1], "r");
	bus.file = folder;
	if (!folder)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		stuff = NULL;
		read_line = getline(&stuff, &vast, folder);
		bus.content = stuff;
		counter++;
		if (read_line > 0)
		{
			execute(stuff, &stack, counter, folder);
		}
		free(stuff);
	}
	free_stack(stack);
	fclose(folder);
return (0);
}