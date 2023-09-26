#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of listint_t
 * @head: pointer
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *pointer = head;
	size_t sum = 0;

	while (pointer != NULL)
	{
		sum += pointer->n;
		pointer = pointer->next;
	}
	return (sum);
}
