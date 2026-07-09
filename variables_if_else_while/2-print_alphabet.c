#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
