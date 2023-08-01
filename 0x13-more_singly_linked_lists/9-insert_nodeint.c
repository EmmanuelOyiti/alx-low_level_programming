#include "lists.h"

/**
 * insert_nodeint_at_index - here, it inserts a new node in linked list,
 * at the given position
 * @head: is the pointer to the first node inside the list
 * @idx: here, is the index where the new node will be added
 * @n: here, is the data to be inserted in the new node
 * Return: returns pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int h;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (h = 0; temp && h < idx; h++)
	{
		if (h == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
