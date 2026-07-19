#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int index;
	int result;
	int sign;

	index = 0;
	result = 0;
	sign = 1;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
			sign *= -1;

		if (s[index] >= '0' && s[index] <= '9')
			break;

		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		result = (result * 10) + (s[index] - '0');
		index++;
	}

	return (result * sign);
}
