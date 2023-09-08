#include "main.h"
/**
 * *array_range - fuction that create an array of integers
 * @min: parameter
 * @max: parameter
 * Return: a pointer or NULL
 */
int *array_range(int min, int max)
{
	int *result;
	int a, b = 0;

	if (min > max)
		return (NULL);
	result = malloc(sizeof(*result) * ((max - min) + 1));
	if (result != NULL)
	{
		for (a = min; a <= max; a++)
		{
			result[b] = a;
			b++;
		}
		return (result);
	}
	else
		return (NULL);

}
