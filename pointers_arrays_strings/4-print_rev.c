#include <stdio.h>
#include "main.h"

/**
 * print_rev- returns the string reversed with a new line
 * @s: is the string input
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
