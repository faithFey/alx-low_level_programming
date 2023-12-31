#include "lists.h"

/**
 *list_len - returns the number of elements in the linked list.
 *@h:pointer to the list
 *Return:returns the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
