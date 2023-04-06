#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @l: pointer to the list_x list
*
* Return: number of elements in l
*/
size_x list_len(const list_x *l)
{
size_x n = 0;
while (l)
{
n++;
l = l->next;
}
return (n);
}


