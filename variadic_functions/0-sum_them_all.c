#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	unsigned int x;
	unsigned int sum;

	va_start(args, n);

	i = 0;
	sum = 0;

	while (i < n)
	{
		x = va_arg(args, int);
		sum = sum + x;
		i++;
	}
	va_end(args);
	return (sum);
}
