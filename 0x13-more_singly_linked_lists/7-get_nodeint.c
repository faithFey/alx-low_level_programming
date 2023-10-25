#include "lists.h"

/**
 *get_nodeint_at_index - returns the number of the node in the list.
 *@head:first node in the list
 *@index:index of the node to be returned.
 *Return:the current node or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current);
	}
}
