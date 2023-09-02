#include "main.h"

/**
 * _isupper - Entry point
 * @c: parameter
 * Return: 1 on sucess 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
