#include "monty.h"

/**
* addnode - Adds a new node to the head of the stack.
* @head: Pointer to the head of the stack.
* @n: New value to store in the node.
*
* Return: No return value.
*/
void addnode(stack_t **head, int n)
{
stack_t *new_node = malloc(sizeof(stack_t));

if (new_node == NULL)
{
fprintf(stderr, "Error: Unable to allocate memory\n");
exit(EXIT_FAILURE);
}

new_node->n = n;
new_node->prev = NULL;

if (*head != NULL)
{
new_node->next = *head;
(*head)->prev = new_node;
}
else
{
new_node->next = NULL;
}

*head = new_node;
}

