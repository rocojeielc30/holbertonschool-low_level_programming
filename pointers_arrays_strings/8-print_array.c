#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n integers in an array that is n big
 * @a: pointer to the array
 * @n: value of how man elements the array will have
 *
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int print;
	int last;

	print = 0;
	last = n - 1;
	if (last >= 0)
	{
		while (print != last)
		{
			printf("%d, ", a[print]);
			print++;
		}
		printf("%d", a[last]);
	}
	printf("\n");
}
