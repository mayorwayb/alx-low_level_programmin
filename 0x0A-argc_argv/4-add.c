#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1 ; a < argc ; a++)
	{
		for (b = 0 ; argv[a][b] != '\0' ; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
