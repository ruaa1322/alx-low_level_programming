#include "list.h"

/**
 * _strlen - return the length of a string
 * @s:string of lurngth for check
 *
 * Return: int string length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s = s + 1)
		i = i + 1;
	return  (i);
}
/**
 * print_list - print length of string
 * @h:first node pointer
 *
 * Return:
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i = i + 1;
	}
	return (i);
}
