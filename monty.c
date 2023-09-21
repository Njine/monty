#include "monty.h"
int SQ = 1;
/**
 * main - main function for monty
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: exit code
 */
int main(int argc, char **argv)
{
	FILE *infile;
	unsigned int line_number = 0;
	char *stari = NULL;
	stack_t *ju = NULL;
	instruction_t *cmd = NULL;
	size_t sizeg = 0;

	/* check for proper number of arguments */
	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* open file */
	infile = fopen(argv[1], "r");
	if (infile == NULL)
	{
		fprintf(stdout, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* parse file */
	while (getline(&stari, &sizeg, infile) != -1)
	{
		line_number++;
		cmd = parse_line(stari);

		if (!(cmd->opcode) || cmd->opcode[0] == '#')
		{
			free(cmd);
			if (stari)
				free(stari);
			stari = NULL;
			continue;
		}

		if (cmd->f)
			cmd->f(&ju, line_number);
		else
		{
			fprintf(stdout, "L%d: unknown cmd %s\n",
				line_number, cmd->opcode);
			if (stari)
				free(stari);
			if (ju)
				free_stack(ju);
			free(cmd);
			fclose(infile);
			exit(EXIT_FAILURE);
		}

		if (stari)
			free(stari);
		stari = NULL;
		free(cmd);
	}

	if (stari)
		free(stari);
	free_stack(ju);
	fclose(infile);
	return (0);

}