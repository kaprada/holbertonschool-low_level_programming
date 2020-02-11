#include "holberton.h"
#include <stdlib.h>

/**
 * print_sign - check if a char is pos or neg
 * @c: letter to check
 *
 * Return: 0 if 0, 1 if is poz or -1 if less
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
