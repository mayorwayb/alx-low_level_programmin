#include "main.h"
/**
 * **strtow - function that split a string into two words
 * @str: string
 * Return: NULL if function fails
 */
char **strtow(char *str)
{

	char **div;
	int a, b = 0, temp = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);
	div = (char **) malloc(sizeof(char *) * (words + 1));
	if (div != NULL)
	{
		for (a = 0; a <= len(str) && words; a++)
	{
		if ((str[a] != ' ') && (str[a] != '\0'))
			size++;
		else if (((str[a] == ' ') || (str[a] == '\0')) && a && (str[a - 1] != ' '))
		{
			div[b] = (char *) malloc(sizeof(char) * size + 1);
			if (div[b] != NULL)
		{
			while (temp < size)
			{
				div[b][temp] = str[(a - size) + temp];
				temp++;
			}
			div[b][temp] = '\0';
			size = temp = 0;
			b++;
		}
			else
			{
				while (b-- >= 0)
					free(div[b]);
				free(div);
				return (NULL);
			}
		}
	}
		div[words] = NULL;
		return (div);
	}
	return (NULL);
}
/**
 * num_words - counts the number of words in str
 * @str: string
 * Return: number of words
 */
int num_words(char *str)
{
	int a = 0, words = 0;

	while (a <= len(str))
	{
		if ((str[a] != ' ') && (str[a] != '\0'))
		{
			a++;
		}
		else if (((str[a] == ' ') || (str[a] == '\0')) && a && (str[a - 1] != ' '))
		{
			words += 1;
			a++;
		}
		else
		{
			a++;
		}
	}
	return (words);
}
/**
 * len - returns length of string
 * @str: string
 * Return: length of the string
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
