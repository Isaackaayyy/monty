#include "monty.h"


void execute_input(const char *input, unsigned int line_number)
{
	char opcode[10];
	int value;

	if (sscanf(input, "%s %d", opcode, &value) == 2 && strcmp(opcode, "push") == 0)
		push(&stack, value);
	else if (strcmp(input, "pall") == 0)
		pall(&stack, line_number);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, input);
		exit(EXIT_FAILURE);
	}
}
