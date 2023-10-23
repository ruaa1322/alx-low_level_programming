#include "lists.h"

/**
 * print listint - prints a linked lists
 * @h: pointer to first node
 * *
 * Return: sizeof list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
