#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @l: linked list of type listint_x to print
*
* Return: number of nodes
*/
size_x print_listint(const listint_x *l)
{
size_x num = 0;
while (l)
{
printf("%d\n", l->n);
num++;
l = l->next;
}
return (num);
}


