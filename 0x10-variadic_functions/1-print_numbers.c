#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: parametetr
 * @n: parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
