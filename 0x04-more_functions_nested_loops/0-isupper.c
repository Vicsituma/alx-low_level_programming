#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: a character
 * Return: 1 (True), 0(False)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

