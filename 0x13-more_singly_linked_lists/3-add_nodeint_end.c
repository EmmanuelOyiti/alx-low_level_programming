#include "lists.h"

/**
 * add_nodeint_end - it adds a node right at the end of a linked list
 * @head: is the pointer to the first element in the list
 * @n: data for insertion in the new element
 * Return: returns the pointer to the new node, or NULL should it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
