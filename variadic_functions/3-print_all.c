#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints different types of data based on a format string
 * @format: string containing the types of arguments to print
 *
 * The format characters determine the type of each argument:
 * c prints a character, i prints an integer, f prints a float,
 * and s prints a string. Unknown format characters are ignored.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int char_to_print;
	int int_to_print;
	double double_to_print;
	char *string_to_print;
	int i;
	int printed;
	int valid;

	va_start(args, format);

	i = 0;
	printed = 0;

	while (format[i] != '\0')
	{
		valid = 0;

		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				valid = 1;
				break;
		}

		if (valid && printed)
			printf(", ");

		switch (format[i])
		{
			case 'c':
			{
				char_to_print = va_arg(args, int);
				printf("%c", char_to_print);
				printed = 1;
				break;
			}
			case 'i':
			{
				int_to_print = va_arg(args, int);
				printf("%d", int_to_print);
				printed = 1;
				break;
			}
			case 'f':
			{
				double_to_print = va_arg(args, double);
				printf("%f", double_to_print);
				printed = 1;
				break;
			}
			case 's':
			{
				string_to_print = va_arg(args, char *);

				if (string_to_print == NULL)
					printf("(nil)");

				if (string_to_print != NULL)
					printf("%s", string_to_print);

				printed = 1;
				break;
			}
		}

		i++;
	}

	va_end(args);

	printf("\n");
}