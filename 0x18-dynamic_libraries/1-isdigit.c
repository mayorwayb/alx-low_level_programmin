#include "main.h"
/**
 * _isdigit - Entry point
 * @c: parameter
 * Return: 1 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
