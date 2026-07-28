#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>


/**
 * int_index - searches for an integer
 * @array: array of integers to search
 * @size: number of elements in the array
 * @cmp: function pointer used to compare values
 *
 * Return: index of the first element that matches, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int temp;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		temp = cmp(array[i]);

		if (temp != 0)
		{
			return (i);
		}

		i++;

	}

	return (-1);
}
