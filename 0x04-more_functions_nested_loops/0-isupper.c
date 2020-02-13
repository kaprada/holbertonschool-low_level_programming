#include "holberton.h"

/**
 * _isupper - check if a char is uppercase
 * @c: character to check
 *
 * Return: 1 = uppercase, otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
