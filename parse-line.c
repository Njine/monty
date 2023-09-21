#include "monty.h"

/**
 * is_int - checks if a string is valid for atoi
 * @str: the string
 *
 * Return: 1 for true, 0 for false
 */
int is_int(char *str)
{
	if (!str)
		return (0);

	int i;

	for (i = 0; str[i]; i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;

		if (!isdigit(str[i]))
			return (0);
	}

	return (1);
}
