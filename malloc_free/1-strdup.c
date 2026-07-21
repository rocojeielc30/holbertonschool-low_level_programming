#include <stdlib.h>
#include "main.h"

/**
 * _strdup- function that returns a pointer to a newly allocated space in memory
 * @str: the original string to be duped
 *
 * Return: pointer to the created array, or NULL if size is 0 or malloc fails
 */
char *_strdup(char *str) {

	int i;
	int length;
	char *dupe;

	i = 0;
	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[length] != '\0')
	{
		length++;
	}

	dupe = malloc(length + 1);

	if (dupe == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		dupe[i] = str[i];
		i++;
	}

	dupe[i] = '\0';

	return (dupe);

}
