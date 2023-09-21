#include "monty.h"

/**
 * set_mode - sets the mode to stack (LIFO) or queue (FIFO)
 * @stack: monty stack
 * @line_number: line number of file
 */
void set_mode(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
	SQ = 1;
}

