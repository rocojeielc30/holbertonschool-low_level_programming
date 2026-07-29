#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints different types of arguments based on a format string
 * @format: string containing the types of arguments to print
 *
 * The format string specifies the type of each argument:
 * c prints a character, i prints an integer, f prints a float,
 * and s prints a string. Unknown format characters are ignored.
 * A separator is printed between each valid argument.
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

	va_start(args, format);
	i = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			{
				char_to_print = va_arg(args, int);
				printf("%c", char_to_print);
				break;
			}
			case 'i':
			{
				int_to_print = va_arg(args, int);
				printf("%d", int_to_print);
				break;
			}
			case 'f':
			{
				double_to_print = va_arg(args, double);
				printf("%f", double_to_print);
				break;
			}
			case 's':
			{
				string_to_print = va_arg(args, char *);

				if (string_to_print == NULL)
				{
					printf("(nil)");

				}
				if (string_to_print != NULL)
				{
					printf("%s", string_to_print);
				}
				break;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
