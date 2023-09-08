#include "main.h"
/**
 * *_calloc - function that allocates memory for array using malloc
 * @nmemb: parameter
 * @size: parameter
 * Return: to a pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			result[a] = 0;
		return (result);
	}
	else
		return (NULL);
}
