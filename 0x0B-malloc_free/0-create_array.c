#include "main.h"
/**
 * *create_array - nfunction that creates array of characters
 * @c: character
 * @size: size
 * Return: to pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size ; a++)
		arr[a] = c;
	return (arr);
}
