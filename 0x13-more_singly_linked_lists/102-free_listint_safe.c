#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int fmr;
	listint_t *trans;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		fmr = *h - (*h)->next;
		if (fmr > 0)
		{
			trans = (*h)->next;
			free(*h);
			*h = trans;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
