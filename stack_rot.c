#include "monty.h"
/**
  *f_rotl- This rotates the stack to the top
  *@head: Pointer to the head of stac
  *@counter: line number
  *Return: no return value
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *bmx;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	bmx = (*head)->next;
	bmx->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = bmx;
}
