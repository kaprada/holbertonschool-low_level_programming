#include "holberton.h"
#include <stdlib.h>

/**
 * print_alphabet - print alphabet using _putchar
 *
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
