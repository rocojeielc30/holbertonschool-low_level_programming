#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a separator.
 * @separator: String to be printed between each string, or NULL.
 * @n: Number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string_to_print;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		string_to_print = va_arg(args, char *);

		if (string_to_print == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string_to_print);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

}
