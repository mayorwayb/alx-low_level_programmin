#include <stdio.h>
/**
 * main - print all argument it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0 ; l > argc ; l++)
		printf("%s\n", argv[l]);
	return (0);
}
