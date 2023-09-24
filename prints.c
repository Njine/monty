#include "monty.h"
/**
 * f_pall - It prints the stack
 * @head: Pointer to the haed of stack
 * @counter: no used
 * Return: no return value
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
