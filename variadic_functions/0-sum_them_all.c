#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters
 * @n - the numbers of arguments passed 
 * 
 * Return: SUm of all arguments 
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
