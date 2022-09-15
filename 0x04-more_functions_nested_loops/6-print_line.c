#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the argument used for the function
 *
 * Return: returns result
 */

void print_line(int n)
{
	
  while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

