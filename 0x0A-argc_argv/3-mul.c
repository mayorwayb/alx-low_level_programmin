#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
