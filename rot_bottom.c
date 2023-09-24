#include "monty.h"
/**
  *f_rotr- This rotates the stack to the bottom
  *@head: Pointer ot the head of stack.
  *@counter: line number
  *Return: no return value
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *dupli;

	dupli = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dupli->next)
	{
		dupli = dupli->next;
	}
	dupli->next = *head;
	dupli->prev->next = NULL;
	dupli->prev = NULL;
	(*head)->prev = dupli;
	(*head) = dupli;
}
