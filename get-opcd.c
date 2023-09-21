#include "monty.h"

/**
 * get_opcode - gets opcode and sets push_arg if push
 * @string: line of code
 *
 * Return: the opcode
 */
char *get_opcode(char *string)
{
	char *opcd;

	/** grabs first argument **/
	opcd = strtok(string, "\n\t ");
	return (opcd);

}
