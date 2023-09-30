#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter
 * @index: index
 *
 * Return: value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = n >> index;

	return (value & 1);
}
