#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: String to be printed between numbers, or NULL.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num_to_print;
	unsigned int i;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		num_to_print = va_arg(args, int);
		printf("%i", num_to_print);

		if (separator != NULL && i < (n - 1))
		{
			printf("$s", separator);
		}

		i++;
	}
	va_end(args);
	printf("\n");

}
