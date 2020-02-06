#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowecase
 *
 *
 * Return: 0
*/

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
