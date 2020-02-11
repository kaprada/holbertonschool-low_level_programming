#include "holberton.h"
#include <stdlib.h>

/**
 * _isalpha - check if a char is a letter
 * @c: letter to check
 *
 * Return: 0 if isn't letter otherwise return 1.
 *
 */

int _isalpha(int c)
{
	int letter;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		letter = 1;
	else
		letter = 0;

	return (letter);
}
