#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print z to a
 *
 *
 * Return: 0
*/

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
