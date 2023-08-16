#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 98;
	int fib1 = 1, fib2 = 2;

	int i;

	printf("%d, %d", fib1, fib2);
	i = 3;
	for (; i <= n ; i++)
	{
		int nextFib = fib1 + fib2;

		printf(", %d", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
