#include "lists.h"

/**
 * free_listint - used to free linked list
 * @head: contains the listint_t list that will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
