#include "lists.h"
/**
 * *add_node - function that adds a new node at the beginning of a list
 * @head: pointer to list_t
 * @str: string
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cop;
	int len;
	list_t *nnode;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);

	cop = strdup(str);
	if (cop == NULL)
	{
		free(nnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	nnode->str = cop;
	nnode->len = len;
	nnode->next = *head;

	*head = nnode;

	return (nnode);

}
