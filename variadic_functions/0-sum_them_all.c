#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i;
	int x;
	int sum;

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
