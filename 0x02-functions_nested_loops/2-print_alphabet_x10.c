#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always
 */

void print_alphabet_x10(void)

{
	int c;
	char a;

	for (c = 0 ; c < 10 ; c++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}

}
