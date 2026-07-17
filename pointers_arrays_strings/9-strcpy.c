#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - prints n integers in an array that is n big
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 *
 * Return: dest array pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = src[n];
	return (dest);
}
