#include "lists.h"

/**
 * add_nodeint - A new node added at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: insert data in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}