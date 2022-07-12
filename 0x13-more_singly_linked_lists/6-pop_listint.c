#include "lists.h"

/**
 * pop_listint - delets the head node of linklist_t and returns the head node's data
 *
 * @head: pointer to head
 *
 * Return: head nodes data (type int)
 */

int pop_listint(listint_t **head)
{
	int tmp;

	if((*head)->next == NULL)
	{
		return (0);
	}

	tmp = (*head)->n;
	*head = (*head)->next;

	return (tmp);
}
