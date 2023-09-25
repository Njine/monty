#include "monty.h"

/**
* f_pall - It prints the stack
* @head: Pointer to the head of stack
* @counter: Unused
* Return: No return value
*/
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;

(void)counter;

h = *head;
if (h == NULL)
return;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
}
}
