#include <stdio.h>
/**
*main - program to print alphabet letters in upper and lower
*Return: 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
		putchar(c);
}
	for (c = 'A'; c <= 'Z'; ++c)
{
		putchar(c);
}
		putchar('\n');
	return (0);
}
