#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int *sum; 
	int i;

	if (argc > 1)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	while (argv[i] < argc)
	{
		sum = 1 * atoi(argv[i]);
		i++;
	}

	printf("\n");
	return (0);

}
