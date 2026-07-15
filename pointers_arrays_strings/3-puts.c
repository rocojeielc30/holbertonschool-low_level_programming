#include <stdio.h>
#include "main.h"

/**
 * _puts- returns the string along with a new line
 * @str: is the string input
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
