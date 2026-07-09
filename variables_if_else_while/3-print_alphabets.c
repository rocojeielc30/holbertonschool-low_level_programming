#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	char upper;

	lower = 'a';

	upper = 'A';

	for (; lower <= 'z'; lower++)
	{
	putchar(lower);
	}

	for (; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}

	putchar('\n');

	return (0);

}
