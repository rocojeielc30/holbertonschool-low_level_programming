#include "main.h"

/**
 * prime_helper - recursively checks whether a number is prime
 * @n: the number being tested
 * @i: the current candidate divisor being tested
 *
 * Return: 0 if n is not prime, 1 if n is prime
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return prime_helper(n, i + 1);



}

/**
 * is_prime_number - determines if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 if n is not prime
 */
int is_prime_number(int n)
{
	return prime_helper(n, 2);
}
