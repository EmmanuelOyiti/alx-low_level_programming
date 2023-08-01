#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints every element of a linked list
 * @h: is the pointer to list_t list to print
 * Return: returns number of nodes printed
 */
size_t print_list(const list_t *h)
{
 size_t z = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 z++;
 }

 return (z);
}
