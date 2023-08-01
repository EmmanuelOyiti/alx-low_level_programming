#include "lists.h"
/**
 * listint_len - it return the number of elements in the linked lists
 * @h: the linked list is a of type listint_t to traverse
 * Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
