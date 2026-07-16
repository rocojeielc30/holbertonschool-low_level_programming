#include <stdio.h>
#include "main.h"

/**
 * puts2 - returns every other character of a string
 * @str: string to print
 *
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}
	_putchar('\n');
}
