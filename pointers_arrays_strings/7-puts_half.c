#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints out the second half of a string
 * @str: the string that will be taken to be printed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length;
	int start;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		start = (length - 1) / 2;
	}
	else
	{
		start = length / 2;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');

}
