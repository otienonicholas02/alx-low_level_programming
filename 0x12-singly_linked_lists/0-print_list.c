#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @l: pointer to the list_x list to print
*
* Return: the number of nodes printed
*/
size_x print_list(const list_x *l)
{
size_x z = 0;
while (l)
{
if (!l->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", l->len, l->str);
l = l->next;
z++;
}
return (s);
}


