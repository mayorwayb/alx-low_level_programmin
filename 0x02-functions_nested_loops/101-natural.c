#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int j;

	for (j = 0 ; j < 1024 ; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
			sum = sum + j;
	}
	printf("%d\n", sum);
	return (0);
}
