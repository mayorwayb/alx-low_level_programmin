#include "main.h"
/**
 * print_last_digit - Entry point
 * @m: parameter
 * Return: j
 */
int print_last_digit(int m)
{
	int j;

	j = m % 10;
	if (m < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
