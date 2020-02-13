#include <stdio.h>
#include"holberton.h"

/**
 * main - print the largest prime factor of
 * the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long n;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%d\n", i);

	return (0);
}
