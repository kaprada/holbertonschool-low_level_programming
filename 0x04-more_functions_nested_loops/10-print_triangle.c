#include "holberton.h"

/**
 *print_triangle - Print a triangle n size
 *@size: Numbers of lines
 *Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)

		_putchar('\n');
	else

		for (i = 0; i < size ; i++)
		{
			for (j = 0; j < size ; j++)
			{
				k = i + 1;

				if (j < size - k)

				{
					_putchar(' ');
				}
				else
					_putchar(35);
			}

			_putchar('\n');
		}

}
