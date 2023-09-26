#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to head node
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trans = *head;
	listint_t *prens = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(trans);
		return (1);
	}

	while (a < index - 1)
	{
		if (!trans || !(trans->next))
			return (-1);
		trans = trans->next;
		a++;
	}


	prens = trans->next;
	trans->next = prens->next;
	free(prens);

	return (1);
}
