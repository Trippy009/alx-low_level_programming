#include "lists.h"

/**
 * print_listint - all the elements of a linked list to be printed
 * @h: Print linked list of type listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
