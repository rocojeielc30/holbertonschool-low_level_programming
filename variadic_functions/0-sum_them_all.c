#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * Return: The sum of all the arguments, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	unsigned int x;
	unsigned int sum;

	va_start(args, n);

	i = 0;
	sum = 0;

	if (n == 0)
	{
		return (sum);
	}

	while (i < n)
	{
		x = va_arg(args, int);
		sum = sum + x;
		i++;
	}
	va_end(args);
	return (sum);
}
