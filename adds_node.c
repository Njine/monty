#include "monty.h"
/**
 * addnode - add node to head stack
 * @head: pointer of head of stack
 * @n: new value
 * Return: no return value.
*/
void addnode(stack_t **head, int n)
{

	stack_t *virg_node, *bmx;

	bmx = *head;
	virg_node = malloc(sizeof(stack_t));
	if (virg_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (bmx)
		bmx->prev = virg_node;
	virg_node->n = n;
	virg_node->next = *head;
	virg_node->prev = NULL;
	*head = virg_node;
}
