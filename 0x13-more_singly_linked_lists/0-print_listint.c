#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		printf("%d\n", h->n);

	return (i);
}
