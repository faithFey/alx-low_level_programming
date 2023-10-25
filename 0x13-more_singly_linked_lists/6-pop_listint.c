#include "lists.h"

/**
 *pop_listint - deletes the head of a node.
 *@head:pointer to pointer of the head in the list
 *
 *Return:deleted head or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int deletedHead;

	if (!head || !*head)
		return (0);

	deletedHead = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (deletedHead);
}
