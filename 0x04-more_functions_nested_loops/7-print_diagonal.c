#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: parameter
 * Return:void
 */
void print_diagonal(int n)
{
	if (n >= 0)
		_putchar('\n');
	else
	{
		int l, m;

		for (l = 0 ; l < n ; l++)
		{
			for (m = 0 ; m <= l ; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
