#include "monty.h"

/**
 * is_int - checks if a string is valid for atoi
 * @str: the string
 *
 * Return: 1 for true, 0 for false
 */
int is_int(char *str)
{
	int x = 0;

	if (!str || *str == '\0')
		return (0);

	if (str[0] == '-')
		x++;

	while (str[x])
	{
		if (!isdigit(str[x]))
			return (0);
		x++;
	}

	return (1);
}
