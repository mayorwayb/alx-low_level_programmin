#include "main.h"
/**
 * _strspn - function that get the length of a prefix subsrting
 * @s: parameter
 * @accept: paremeter
 * Return: a or 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; s[b] != '\0' ; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
