#include "main.h"
/**
 * *_strstr - function that locares a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: a pointer to the beginning or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0 ; haystack[a] != '\0' ; a++)
	{
		for (b = 0 ; needle[b] != '\0' ; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[b]);
	}
	return (NULL);
}
