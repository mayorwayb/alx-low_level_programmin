#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			result = a * b;
			if (b == 0)
				_putchar(result + '0');
			else
			{
				_putchar('.');
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
