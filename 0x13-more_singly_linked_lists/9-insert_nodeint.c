#include "lists.h"
/**
 *  *insert_nodeint_at_index - function that inserts a new node
 *  @head: pointer
 *  @idx: index
 *  @n: parameter
 *
 *  Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nnode;
	listint_t *trans = *head;

	nnode = malloc(sizeof(listint_t));
	if (!nnode || !head)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	for (a = 0; trans && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nnode->next = trans->next;
			trans->next = nnode;
			return (nnode);
		}
		else
			trans = trans->next;
	}

	return (NULL);
}
