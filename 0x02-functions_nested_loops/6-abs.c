#include "main.h"
/**
 * _abs - Entry point
 * @m: parameter
 * Return: a or -a
 */
int _abs(int m)
{
	if (m < 0)
		return (-m);
	else if (m >= 0)
		return (m);
	return (0);
}
