#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - my main function
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("% is positive\n", n);
	else if (n == 0)
		printf("% is zero\n", n);
	else
		printf("% is negative\n", n);
	return (0);
}
