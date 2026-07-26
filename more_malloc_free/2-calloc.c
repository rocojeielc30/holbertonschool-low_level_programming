#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	i = 0;
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
