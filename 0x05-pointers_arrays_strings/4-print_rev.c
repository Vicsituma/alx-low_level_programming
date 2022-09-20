#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string for reverse printing
*/
void print_rev(char *s)
{
	int i;

	for (i = (_strlen(s) - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
