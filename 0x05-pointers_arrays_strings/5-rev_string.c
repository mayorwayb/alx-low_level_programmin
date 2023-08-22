#include "main.h"
/**
 * rev_string - reverse a string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int r;
	char t;
	int count = 0;

	for (r = 0 ; s[r] != '\0' ; r++)
		count++;
	for (r = 0 ; r < count / 2 ; r++)
	{
		t = s[r];
		s[r] = s[count - 1 - r];
		s[count - 1 - r] = t;
	}
}
