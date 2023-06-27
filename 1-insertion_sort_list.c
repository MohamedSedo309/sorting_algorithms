#include "sort.h"

/**
 * swap_node - Swap two nodes in a listint_t doubly-linked list
 * @h: head of the doubly-linked list
 * @n1: pointer to the first node to swap
 * @n2: second node to swap
 */

void swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
{
n2->next->prev = *n1;
}
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev != NULL)
{
(*n1)->prev->next = n2;
}
else
{
*h = n2;
}
(*n1)->prev = n2;
*n1 = n2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order
 * @list: head pointer of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *itr, *new_node, *tmp;

if (list == NULL || (*list)->next == NULL || *list == NULL)
{
return;
}

for (itr = (*list)->next; itr != NULL; itr = tmp)
{
tmp = itr->next;
new_node = itr->prev;
while (new_node != NULL && itr->n < new_node->n)
{
swap_node(list, &new_node, itr);
print_list((const listint_t *)*list);
}
}
}
