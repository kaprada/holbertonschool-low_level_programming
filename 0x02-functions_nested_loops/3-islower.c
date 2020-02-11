#include "holberton.h"
#include <stdlib.h>

/**
 * _islower - check if a char is lowecase letter
 * @c: letter to check
 *
 * Return: 0 is no lowercase otherwise return 1.
 *
 */

int _islower(int c)
{
	int letter;

	if (c >= 97 && c <= 122)
		letter = 1;
	else
		letter = 0;

	return (letter);
}
