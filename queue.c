#include "monty.h"

/**
 * f_queue - Sets the queue mode.
 * @head: Pointer to the head of the stack (unused).
 * @counter: Line number (unused).
 * Return: No return value.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @n: New value to add.
 * @head: Pointer to the head of the stack.
 * Return: No return value.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *nodenew, *bmx;

	bmx = *head;
	nodenew = malloc(sizeof(stack_t));
	if (nodenew == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	nodenew->n = n;
	nodenew->next = NULL;
	if (bmx)
	{
		while (bmx->next)
			bmx = bmx->next;
	}
	if (!bmx)
	{
		*head = nodenew;
		nodenew->prev = NULL;
	}
	else
	{
		bmx->next = nodenew;
		nodenew->prev = bmx;
	}
}

