#include <stdio.h>

/**
 * rev_string - reverses the string
 * @s: is the string input
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int start;
	int end;
	char temp;
	int length;

	length = 0;
	start = 0;
	while (s[length])
	{
		length++;
	}
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}


}
