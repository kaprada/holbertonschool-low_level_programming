#include "holberton.h"
#include <stdlib.h>

/**
 * main - print alphabet using _putchar
 *
 *
 * Return: success 0.
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
