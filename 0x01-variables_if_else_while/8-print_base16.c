#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print hex base numbers
 *
 *
 * Return: 0
*/

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
