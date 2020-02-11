#include "holberton.h"

/**
*print_last_digit - prints the last digit of a number.
*@int: integer
*
*Return: The value of the las digit
*/

int print_last_digit(int)
{
	int last_dig

	if (last_dig < 0)
  {
		last_dig = (int % 10) * -1;
	}

	else
	{
		last_dig = int % 10;
	}
	_putchar (last_dig + '0');
	return (last_dig);
}
