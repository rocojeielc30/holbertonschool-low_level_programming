#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: string 1 to copy
 * @s2: string 2 to copy
 *
 * Return: pointer to the created array, or NULL if size is 0 or malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int i2;
	char *dupe;

	len1 = 0;
	len2 = 0;
	i = 0;
	i2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	dupe = malloc(len1 + len2 + 1);

	if (dupe == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		dupe[i] = s1[i];
		i++;
	}

	while (i2 < len2)
	{
		dupe[i] = s2[i2];
		i++;
		i2++;
	}

	dupe[i] = '\0';

	return (dupe);

}
