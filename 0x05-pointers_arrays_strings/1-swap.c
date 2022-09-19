#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 * 
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = b;
*b = tmp;
}
