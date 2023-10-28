#include "main.h"
/**
 * flip_bits - function to flip to get from one number to another number
 * @n: number
 * @m: another number
 * Return: number of the bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int counter;

	flip = n ^ m;
	counter = 0;

	while (flip)
	{
		counter++;
		flip &= (flip - 1);
	}

	return (counter);
}
