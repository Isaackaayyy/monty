#ifndef MONTY
#define MONTY


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"


extern stack_t *stack;

/* PROTOTYPES */
void execute_input(const char *input, unsigned int line_number);
void push(__attribute((unused))stack_t **stack, int value);
void pall(__attribute((unused))stack_t **stack, __attribute((unused))unsigned int line_number);
void pint(__attribute((unused))stack_t **stack, unsigned int line_number);


#endif
