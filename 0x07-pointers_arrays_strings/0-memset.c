#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: points to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);
}
