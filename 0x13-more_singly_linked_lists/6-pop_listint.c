#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: ponter to head node
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *trans;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	trans = (*head)->next;
	free(*head);
	*head = trans;

	return (num);
}
