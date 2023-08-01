#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at certain index inside linked list
 * @head: is the first node inside the linked list
 * @index: index of the node to be returned
 * Return: returns pointer to the node we are looking for or returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
