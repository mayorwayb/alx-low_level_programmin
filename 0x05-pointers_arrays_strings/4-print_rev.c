#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int r;
	int count = 0;

	for (r = 0 ; s[r] != '\0' ; r++)
		count++;
	for (r = count - 1 ; r >= 0 ; r--)
		_putchar(s[r]);
	_putchar('\n');
}
