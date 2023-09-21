#include "monty.h"

/**
* free_stack - frees a stack_t list.
* @head: a pointer to the head
*
* Return: void
*/
void free_stack(stack_t *head)
{
stack_t *current = head;
stack_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
