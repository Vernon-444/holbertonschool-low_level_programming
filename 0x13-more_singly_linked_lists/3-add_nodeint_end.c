#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to head
 * @n: int to be added in list
 *
 * Return: pointer to head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (*head);
}
