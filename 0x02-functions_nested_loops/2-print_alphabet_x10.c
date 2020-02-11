#include "holberton.h"
#include <stdlib.h>

/**
 * print_alphabet_x10 - print alphabet using _putchar 10 times
 *
 *
 * Return: success 0.
 *
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
