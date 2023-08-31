#include "main.h"
/**
 * is_prime_number - function that returns prime number
 * @n: parameter
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime(n, n - 1));
}
/**
 * a_prime - returns prime number
 * @n: parameter
 * @p: parameter
 * Return: prime number
 */
int a_prime(int n, int p)
{
	if (p == 1)
		return (1);
	else if (n % p == 0 && p > 0)
		return (0);
	else
		return (a_prime(n, p - 1));
}
