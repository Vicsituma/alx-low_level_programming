#include "lists.h"
/**
 * print_listint - prints all the elements of a list_tint list.
 * @h: a singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
