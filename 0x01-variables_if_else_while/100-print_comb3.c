#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print 0 to 99
 *
 *
 * Return: 0
*/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (i != j && j != i)
			{	
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
