#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to head
 *
 * @str: list of names provided
 *
 * Return: node and list
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL || str == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	newNode->len = strlen(str);

	newNode->next = *head;

	*head = newNode;

	return(*head);
}
