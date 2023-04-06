#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: list_x list to be freed
*/
void free_list(list_x *head)
{
list_x *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}


