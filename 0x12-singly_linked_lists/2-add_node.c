#include "lists.h"

/**
 *add_node - adds the first node in the list.
 *@head:double pointer to the list.
 *@str:input string.
 *Return:the address of the new node else NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len = 0;

	while (str[len])

	len++;

	first = malloc(sizeof(list_t));
	if (!first)
	return (NULL);
	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;
	return (*head);
}
