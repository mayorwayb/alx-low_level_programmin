#include <stdio.h>

void __attribute__((constructor)) tort(void);

/**
 * tort - prints a sentence before the main function is executed
 */
void tort(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
