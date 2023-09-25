#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *trans;

	while (head)
	{
		trans = head->next;
		free(head);
		head = trans;
	}
}
