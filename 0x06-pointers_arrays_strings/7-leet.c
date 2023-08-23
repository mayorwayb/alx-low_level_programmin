#include "main.h"
/**
 * *leet - function that encodes string
 * @n: parameter
 * Return: n
 */
char *leet(char *n)
{
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	int c, d;

	for (c = 0 ; n[c] != '\0' ; c++)
	{
		for (d = 0 ; d < 10 ; d++)
		{
			if (n[c] == a[d])
				n[c] = b[d];
		}
	}
	return (n);
}
