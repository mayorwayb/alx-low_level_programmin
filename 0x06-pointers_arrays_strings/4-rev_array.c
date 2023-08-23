#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l;
	int h;

	for (l = 0 ; l < n / 2 ; l++)
	{
		h = a[l];
		a[l] = a[n - 1 - l];
		a[n - 1 - l] = h;
	}
}
