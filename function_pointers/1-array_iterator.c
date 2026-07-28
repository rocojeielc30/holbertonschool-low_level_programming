#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

	return;

}
