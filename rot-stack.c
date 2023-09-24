#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top
 * @head: Pointer to the head of stack
 * @counter: Line number
 *
 * Return: No return value
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head;
	stack_t *new_head;

	if (*head == NULL || (*head)->next == NULL)
		return;

	UNUSED(counter);

	while (tmp->next != NULL)
		tmp = tmp->next;

	new_head = (*head)->next;
	new_head->prev = NULL;
	tmp->next = *head;
	(*head)->prev = tmp;
	*head = new_head;
}
