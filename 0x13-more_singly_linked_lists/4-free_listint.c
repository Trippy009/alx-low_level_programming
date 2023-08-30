#include "lists.h"

/**
 * free_listint - a linked list is to be freed
 * @head: Frees listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
