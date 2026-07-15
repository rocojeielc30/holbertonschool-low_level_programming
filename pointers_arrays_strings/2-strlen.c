#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of string
 * @s: string to calculate length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
