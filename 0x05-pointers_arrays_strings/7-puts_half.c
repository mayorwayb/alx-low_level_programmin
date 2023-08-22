#include "main.h"
/**
 * puts_half - half of a string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int h, n, count = 0;

	for (h = 0 ; str[h] != '\0' ; h++)
		count++;
	n = (count - 1) / 2;

	for (h = n + 1 ; str[h] != '\0' ; h++)
		_putchar(str[h]);
	_putchar('\n');
}
