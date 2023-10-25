#include "lists.h"

/**
 *sum_listint - sum of all the data (n) of a listint_t linked list
 *@head:first element of the node
 *Return:sum of the elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
