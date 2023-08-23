#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @n: parameter
 * Return: void
 */
char *cap_string(char *n)
{
	int a, b;

	char s[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (a = 0; n[a] != '\0'; a++)
	{
		if (a == 0 && n[a] >= 'a' && n[a] <= 'z')
			n[a] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (n[a] == s[b])
			{
				if (n[a + 1] >= 'a' && n[a + 1] <= 'z')
				{
					n[a + 1] -= 32;
				}
			}
		}
	}

	return (n);
}
