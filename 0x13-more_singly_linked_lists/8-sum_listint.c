#include "lists.h"

/**
 * get_nodeint_at_index - gets node integer at index
 *
 * @head: pointer to head
 * @index: number of index (start at 0) to be printed
 *
 * Return: data n at index
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
