#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index of number in pointer
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int value;

	if (index > 64)
		return (-1);
	value = index;
	for (a = 1; value > 0; a *= 2, value--)
		;

	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}
