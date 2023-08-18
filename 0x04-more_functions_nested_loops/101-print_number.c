#include "main.h"
/**
 * print_number - print a number
 * @n: parameter0
 * Return:void
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
