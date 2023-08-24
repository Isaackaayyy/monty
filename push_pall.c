#include "monty.h"


stack_t *stack = NULL;


/**
 * push - adding elements to the stack
 * @stack: stack
 * @value: value
 */

void push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;


	*stack = new_node;
}


/**
 * pall - prints all values on the stack, starting from the top of the stack
 * @stack: stack
 */

void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
