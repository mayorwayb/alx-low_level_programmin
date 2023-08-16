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

	printf("%d, %d", fib1, fib2);

	for (int i = 3 ; i <= n ; i++)
	{
		int nextFib = fib1 + fib2;

		printf(", %d", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
