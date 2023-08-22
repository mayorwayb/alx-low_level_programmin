#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	s = *a;
	*a = *b;
	*b = s;
}
