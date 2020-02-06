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
	int n, m, l;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (l = m + 1; l <= '9'; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n != '7' || m != '8' || l != '9')
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
