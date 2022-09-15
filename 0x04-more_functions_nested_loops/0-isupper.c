#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: is the int that will be used for the argument of function
 * Return: 1 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
