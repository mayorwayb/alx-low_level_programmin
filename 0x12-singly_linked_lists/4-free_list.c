#include "lists.h"
/**
 * free_list - function that free list_t
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
