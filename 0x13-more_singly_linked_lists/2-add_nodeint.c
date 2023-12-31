#include "lists.h"

/**
 **add_nodeint - adds a node at the beginning of the list.
 *@head:double pointer to head.
 *@n:value to be added at the beginning of the node.
 *
 *Return:the value of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstNode = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (firstNode == NULL)
	{
		return (NULL);
	}
	firstNode->n = n;
	firstNode->next = *head;
	*head = firstNode;
	return (firstNode);
}
