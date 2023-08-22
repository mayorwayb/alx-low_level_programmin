#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0 ; p < n ; p++)
	{
		printf("%d", a[p]);
		if (p < n - 1)
			printf(", ");
	}
	printf("\n");
}
