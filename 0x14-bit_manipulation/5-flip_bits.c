#include "main.h"
/**
 * flip_bits - function that returns number of bits to flip
 * @n: number
 * @m: number
 *
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int trans;
	unsigned long int bit_manipltn = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		trans = bit_manipltn >> a;
		if (trans & 1)
			num++;
	}

	return (num);
}
