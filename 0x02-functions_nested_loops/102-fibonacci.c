#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 50;
	unsigned long long fib1 = 1, fib2 = 2;

	printf("%llu, %llu", fib1, fib2);

	for (int i = 3 ; i <= n ; i++)
	{
		unsigned long long nextFib = fib1 + fib2;

		printf(", %llu", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
