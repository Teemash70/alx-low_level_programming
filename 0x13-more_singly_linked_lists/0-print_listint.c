#include "lists.h"

/**
 * display_listint - displays all the elements of a linked list
 * @head: linked list of type listint_t to exhibit
 *
 * Return: count of nodes
 */
size_t display_listint(const listint_t *head)
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
