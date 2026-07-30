#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name or the first command-line argument.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	char *name;

	name = argv[0];

	if (argc > 1)
	{
		name = argv[1];
	}

	printf("%s", name);
	printf("\n");

	return (0);

}
