#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head
 *
 * Return: num
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
