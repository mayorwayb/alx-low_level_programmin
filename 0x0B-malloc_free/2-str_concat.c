#include "main.h"
/**
 * *str_concat - function that concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, a;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
		s1len++;
	for (a = 0 ; s2[a] != '\0' ; a++)
		s2len++;
	result = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (result == NULL)
		return (NULL);
	for (a = 0 ; s1[a] != '\0' ; a++)
		result[a] = s1[a];
	for (a = 0 ; s2[a] != '\0' ; a++)
		result[s1len + a] = s2[a];
	return (result);
}
