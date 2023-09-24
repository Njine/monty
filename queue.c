#include "monty.h"
/**
 * f_queue - This prints the top
 * @head: Pointer to the head of stack
 * @counter: line number
 * Return: no return value
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - This adds node to the tail stack
 * @n: new_value
 * @head: Pointer to the head of the stack
 * Return: no return value
*/
void addqueue(stack_t **head, int n)
{
	stack_t *virg_node, *bmx;

	bmx = *head;
	virg_node = malloc(sizeof(stack_t));
	if (virg_node == NULL)
	{
		printf("Error\n");
	}
	virg_node->n = n;
	virg_node->next = NULL;
	if (bmx)
	{
		while (bmx->next)
			bmx = bmx->next;
	}
	if (!bmx)
	{
		*head = virg_node;
		virg_node->prev = NULL;
	}
	else
	{
		bmx->next = virg_node;
		virg_node->prev = bmx;
	}
}
