#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 * Return: address of head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_dest = NULL, *tmpd = NULL, *current = *head;

	if (!head || !(*head))
		return (*head);

	next_dest = current->next;
	current->next = NULL;

	while (next_dest)
	{
		tmpd = next_dest->next;
		next_dest->next = current;
		current = next_dest;
		next_dest = tmpd;
	}
	*head = current;

	return (*head);
}

/*
*Draw a chart and study this algo
*
*/
