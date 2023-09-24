#include "monty.h"

/**
 * f_pall - Prints the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Not used.
 * Return: No return value.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	(void)counter;

	if (h == NULL)
		return;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
	}
}

