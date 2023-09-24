#include "monty.h"

/**
 * f_push - Pushes an element onto the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, i = 0, negative = 0;

	if (!bus.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (bus.arg[0] == '-')
	{
		negative = 1;
		i++;
	}

	while (bus.arg[i] != '\0')
	{
		if (bus.arg[i] < '0' || bus.arg[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		i++;
	}

	n = atoi(bus.arg);

	if (negative)
		n = -n;

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
