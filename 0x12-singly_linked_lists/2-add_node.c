#include "lists.h"
/**
 * *add_node - function that adds a new node at the beginning of a list
 * @head: head of the node
 * @str: string
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int a, count = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (a = 0; str[a] != '\n'; a++)
		count++;
	nnode->len = count;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
