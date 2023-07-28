#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it frees a linked list in the program
 * @head: list_t list to become free
 */
void free_list(list_t *head)
{
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
}
