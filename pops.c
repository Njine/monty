#include "monty.h"
/**
 * f_pop - This prints top
 * @head: Pointer to haed stack
 * @counter: line no
 * Return: no return value
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}
