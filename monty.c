#include "monty.h"


/**
 * main - stack
 * @argc: parameter passed
 * @argv: passed parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char input[1024];
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	while (fgets(input, sizeof(input), file))
	{
		input[strcspn(input, "\n")] = '\0';
		execute_input(input, line_number);
		line_number++;
	}

	fclose(file);

	return (0);
}
