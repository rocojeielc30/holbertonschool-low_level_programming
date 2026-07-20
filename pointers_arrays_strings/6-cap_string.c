#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
		}
	}

	return (str);
}

