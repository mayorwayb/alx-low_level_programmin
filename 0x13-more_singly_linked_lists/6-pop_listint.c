#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: ponter to head node
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int cont;

	if (*head == NULL)
		return (0);
	pop = *head;
	cont = pop->n;
	free(pop);
	*head = (*head)->next;
	return (cont);
}
