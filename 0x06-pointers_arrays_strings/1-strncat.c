#include "main.h"
#include <string.h>
/**
 * *_strncat - function that contatinates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int b;

	for (b = 0 ; b < n && *src != '\0' ; b++)
	{
		dest[a + b] = *src;
		src++;
	}
	dest[a + b] = '\0';
	return (dest);
}
