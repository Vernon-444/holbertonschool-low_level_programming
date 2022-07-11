#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t list
 *
 * @head: pointer to head
 * @n: int in listint_t
 *
 * Return: pointer to head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
