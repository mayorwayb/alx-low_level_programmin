#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int destlen = 0;
	int srclen = 0;

	for (a = 0 ; dest[a] != '\0' ; a++)
		destlen++;
	for (a = 0 ; src[a] != '\0' ; a++)
		srclen++;
	for (a = 0 ; a <= srclen ; a++)
		dest[destlen + a] = src[a];
	return (dest);
}
