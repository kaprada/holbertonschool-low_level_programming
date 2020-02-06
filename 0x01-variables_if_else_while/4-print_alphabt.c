#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet except e and q
 *
 *
 * Return: 0
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
