#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *		there is one or more chars in the string b that is not 0 or 1
 *		b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (power = 1, sum = 0, count--; count >= 0; count--, power *= 2)
	{
		if (b[count] == '1')
			sum += power;
	}

	return (sum);
}
