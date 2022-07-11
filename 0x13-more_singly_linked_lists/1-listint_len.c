#include "lists.h"

/**
 * listint_len - returns num of elements in a linked listint_t list
 *
 * @hL pointer to head
 *
 * Return: Num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
