#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers 0 to 9
 * @n: int used for argument of function
 * void: return value
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	  _putchar(n, '\n');
	}

	return (0);
}
