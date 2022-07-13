#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 *
 * @head: pointer to head
 * @idx: index to insert node
 * @n: value to be inserted
 *
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *insert = malloc(sizeof(listint_t));
	listint_t *p1, *p2;

	if (head == NULL || insert == NULL)
		return (NULL);

	p1 = *head;
	p2 = *head;

	while (i < idx - 1 && p1 != NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
		i++;
	}

	if (p2->next != NULL)
		p2 = p2->next;

	p1->next = insert;
	insert->next = p2;
	insert->n = n;

	return (insert);
}
