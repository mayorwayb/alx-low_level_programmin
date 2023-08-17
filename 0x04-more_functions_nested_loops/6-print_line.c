#include "main.h"
/**
 * print_line - print line
 * @n: parameter0
 * Return:void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 1 ; a <= n ; a++)
			_putchar('\n');
		_putchar('\n');
	}
}
