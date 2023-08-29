#include "main.h"
/**
 * *_memcpy - function that copies memeory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
