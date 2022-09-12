#include "monty.h"

/**
 * nop_func - doesn’t do anything
 *
 * Return: void
 */

void nop_func(stack_t __attribute__((unused)) **stack, unsigned int __attribute__((unused)) line)
{
	printf("%s", "This doesn’t do anything");
}
