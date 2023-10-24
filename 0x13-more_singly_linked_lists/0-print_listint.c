#include "lists.h"

/**
 *print_listint - prints all the elements of listint_t list
 *@h:pointer to the head of the list.
 *
 *Return:returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
