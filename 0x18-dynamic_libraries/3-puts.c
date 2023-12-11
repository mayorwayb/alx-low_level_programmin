#include "main.h"
/**
 * _puts - print string followed by a new line
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
