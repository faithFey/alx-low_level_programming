#include "lists.h"

/**
 *free_listint - frees the listint linked list
 *@head:pointer to the head of the node.
 *Return:nothing
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
