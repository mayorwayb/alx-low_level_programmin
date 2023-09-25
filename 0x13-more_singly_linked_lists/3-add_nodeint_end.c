#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: pointer to a node
 * @n: parameter
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *trans = *head;

	nnode = malloc(sizeof(listint_t));
	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (trans->next)
		trans = trans->next;

	trans->next = nnode;

	return (nnode);
}
