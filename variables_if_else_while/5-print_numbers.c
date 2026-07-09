#include <stdio.h>

/**
 * main - prints the numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x;

	x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	printf("\n");

	return (0);
}
