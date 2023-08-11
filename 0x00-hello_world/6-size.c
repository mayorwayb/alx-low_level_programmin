#include <stdio.h>

/**
 * main - this main function desc
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of  long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %%lld  byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
