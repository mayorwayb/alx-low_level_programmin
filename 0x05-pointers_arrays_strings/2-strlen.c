#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: parameter
 * Return: count
 */
int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	return (count);
}
