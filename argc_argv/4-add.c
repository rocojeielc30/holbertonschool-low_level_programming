#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;
	int current_number;

	if (argc == 1)
	{
		printf("0\n");
	}

	i = 1;
	sum = 0;
	while (i < argc)
	{

		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum = sum + atoi(argv[i]);
		i++;

	}

	printf("%d\n", sum);

	return (0);
}
