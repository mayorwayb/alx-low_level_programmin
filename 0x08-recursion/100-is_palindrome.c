#include "main.h"
/**
 * is_palindrome - function that returns 1 if string is palindrome
 * @s: parameter
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (c_palindrome(s, len, index));
}
/**
 * _strlen - functin that returns length of a string
 * @s: parameter
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}
/**
 * c_palindrome - checks if a string is a palindrome
 * @s: parameter
 * @len: parameter
 * @index: parameter
 * Return: -1 or 0
 */
int c_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (c_palindrome(s, len, index + 1));

	return (0);
}
