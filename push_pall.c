#include "monty.h"


stack_t *stack = NULL;


/**
 * push - adding elements to the stack
 * @stack: stack
 * @value: value
 */

void push(__attribute((unused))stack_t **stack, int value)
{
	stack_t *head;

	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL)
		(*stack)->prev = new_node;
	else
	{
		new_node->next = head;
		head = new_node;
		new_node->next->prev = new_node;
	}
}


/**
 * pall - prints all values on the stack, starting from the top of the stack
 * @stack: stack
 */

void pall(__attribute((unused))stack_t **stack, __attribute((unused))unsigned int line_number)
{
	stack_t *current_node = *stack;

	(void)line_number;

	if (current_node == NULL)
		return;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}


void pint(__attribute((unused))stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	stack_t *new = head;

	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", head->n);
}
