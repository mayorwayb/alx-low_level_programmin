#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 *          where index is the index of the node, starting from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int a;

	current = head;
	a = 0;
	while (current != NULL)
	{
		if (a == index)
			return (current);
		current = current->next;
		a++;
	}
	return (NULL);
}
