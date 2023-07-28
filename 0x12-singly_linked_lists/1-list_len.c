#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of the elements in the linked list
 * @h: pointer to list_t list
 *
 * Return: number of some elements in h
 */
size_t list_len(const list_t *h)
{
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
}
