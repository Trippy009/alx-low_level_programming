#include "lists.h"

/**
 * pop_listint - The head node of a linked list to be deleted
 * @head: pointer to the first element in the linked list
 *
 * Return: Deleted data inside the element,
 * or 0 if the list is void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
