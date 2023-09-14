#include "variadic_functions.h"
/**
 * sum_them_all - function that returns sum of all it parameters
 * @n: parameter
 * Return: 0 or result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int a;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		result = result + va_arg(arg, int);
	}
	va_end(arg);
	return (result);
}
