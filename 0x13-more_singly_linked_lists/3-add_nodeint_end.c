#include "lists.h"

/**
 *add_nodeint_end -function to add a node to the end of the list.
 *@head:pointer to the first element in lintint_t list
 *@n:value to be stored in the last node
 *Return:element stored or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *temp = *head;

	endNode = malloc(sizeof(listint_t));

	if (!endNode)
	return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = endNode;
	return (endNode);
}
