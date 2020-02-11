#include "holberton.h"

/**
*print_last_digit - prints the last digit of a number.
*@num: integer
*
*Return: The value of the las digit
*/

int print_last_digit(int num)
{
	int last_dig;

	if (num < 0)
	{
		last_dig = (num % 10) * -1;
	}
	else
	{
		last_dig = num % 10;
	}
	_putchar (last_dig + '0');

	return (last_dig);

}
