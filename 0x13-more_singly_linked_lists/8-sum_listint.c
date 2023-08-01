#include "lists.h"

/**
 * sum_listint - used to calculate the sum of all data in listint_t list
 * @head: is the first node inside the linked list
 * Return: returns the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
