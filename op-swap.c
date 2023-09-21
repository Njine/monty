#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int swapper;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	swapper = temp->n;
	temp->n = (*stack)->n;
	(*stack)->n = swapper;
}
