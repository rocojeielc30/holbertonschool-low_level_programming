#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments that is input by the user 
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
