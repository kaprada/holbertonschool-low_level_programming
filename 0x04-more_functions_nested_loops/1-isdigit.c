#include "holberton.h"

/**
 * _isdigit - check if a char is a digit
 * @c: char to check
 *
 * Return: 1 = digit, otherwise return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
