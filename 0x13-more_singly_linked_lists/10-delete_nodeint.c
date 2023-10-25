#include "lists.h"

/**
 *delete_nodeint_at_index -deletes the node at index of a  linked list
 *@head:pointer to the element in the linked list.
 *@index:index of the node to be  deleted.
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int c;

	c = 0;
	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (c < index - 1)
	{
	if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		c++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
