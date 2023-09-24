#include "monty.h"
/**
  *f_sub- This performs sustration operation
  *@head: Pointer to the head of stack
  *@counter: line number
  *Return: no return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *bmx;
	int sus, nodes;

	bmx = *head;
	for (nodes = 0; bmx != NULL; nodes++)
		bmx = bmx->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	bmx = *head;
	sus = bmx->next->n - bmx->n;
	bmx->next->n = sus;
	*head = bmx->next;
	free(bmx);
}
