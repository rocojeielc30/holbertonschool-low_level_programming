#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t i;
	char *message; 

	current = h;
	i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	printf("%u elements\n", i);

	return (0);
}
