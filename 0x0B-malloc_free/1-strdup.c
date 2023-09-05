#include "main.h"
/**
 * *_strdup - function that returns a pointer to new space in memory
 * @str: String
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int a, len = 0;

	if (str == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
		len++;
	cpy = malloc(sizeof(char) * len + 1);

	if (cpy == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
		cpy[a] = str[a];
	return (cpy);

}
