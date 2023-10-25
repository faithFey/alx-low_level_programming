#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list.
 *@head:pointer head of the list.
 *Return:number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;
	size_t nodeCount = 0;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("%d\n", slow_ptr->n);
		nodeCount++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("->[%d] %d\n", slow_ptr->n, fast_ptr->n);
			printf("->[%d] %d\n", slow_ptr->n, fast_ptr->next->n);
			exit(98);
		}
	}
	while (slow_ptr != NULL)
	{
		printf("%d\n", slow_ptr->n);
		nodeCount++;
		slow_ptr = slow_ptr->next;
	}
	return (nodeCount);
}
