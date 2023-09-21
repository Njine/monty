#include "monty.h"

/**
* get_opcode - gets the opcode and sets push_arg if it's push
* @string: the line of code
*
* Return: the opcode or NULL if not found
*/
char *get_opcode(char *string)
{
char *opcode = strtok(string, "\n\t ");

if (opcode == NULL || opcode[0] == '#')
return (NULL);

return (opcode);
}
