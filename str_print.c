#include "monty.h"
/**
 * f_pstr - This prints the string starting at the top of the stack,
 * followed by a new
 * @head: Pointer to the head of stack
 * @counter: line number
 * Return: no return value
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
		{
			break;
		}
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}
