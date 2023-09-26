#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list
 * @head: pointer
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fmr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = fmr;
		fmr = *head;
		*head = next;
	}

	*head = fmr;

	return (*head);
}
