#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else
		return (0);
	is_prime_number(n-1);
}