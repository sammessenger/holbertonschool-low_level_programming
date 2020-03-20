#include "lists.h"
/**
 * print_list - should print a linked list
 * @h: list to be printed
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i;

	while (h)
	{
		if (h->str == '\0';)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
