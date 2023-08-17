#include "main.h"
/**
 * print_square - print square
 * @size: parameter0
 * Return:void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int l, n;

		for (l = 1 ; l <= size ; l++)
		{
			for (n = 1 ; n <= size ; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
