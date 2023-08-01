#include "lists.h"

/**
 * pop_listint - it deletes the head node of the linked list
 * @head: is the pointer to the first element inside the linked list
 * Return: returns the data inside the elements that was deleted,
 * or 0 for empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
