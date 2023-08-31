#include "main.h"
/**
 * _sqrt_recursion - function that returns natural square-root of a number
 * @n: parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_squarert(0, n));
}
/**
 * _squarert - functin that returns aquare root
 * @n: parameter
 * @s: parameter
 * Return: square root
 */
int _squarert(int n, int s)
{
	if (n > s / 2)
		return (-1);
	else if (n * n == s)
		return (n);
	return (_squarert(n + 1, s));
}
