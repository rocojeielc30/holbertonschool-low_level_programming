#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to the 1st integer
 * @b: pointer to the 2nd integer
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
