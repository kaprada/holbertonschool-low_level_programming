#include "holberton.h"

/**
*_abs - return the absolute value of an integer.
*@num: integer
*
*Return: The absolute value of the integer
*/

int _abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (-num);

}
