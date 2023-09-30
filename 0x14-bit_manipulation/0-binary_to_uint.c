#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1
 *
 * Return: converted value or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, base;
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (base = 1, value = 0, count--; count >= 0; count--, base *= 2)
	{
		if (b[count] == '1')
			value += base;
	}

	return (value);
}
