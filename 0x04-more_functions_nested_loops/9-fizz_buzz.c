#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz i
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1;
	int div3, div5;

	while (n < 100)
	{
		div3 = n % 3;
		div5 = n % 5;

		if (div3 == 0 && div5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (div3 == 0)
		{
			printf("Fizz ");
		}

		else if (div5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("Buzz\n");
	return (0);
}

