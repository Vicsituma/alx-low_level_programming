#include <stdio.h>
/**
 * reset_to_98 - takes a pointer to an int as parameter and updates
 * the value it points to to 98.
 * @*m: pointer to an integer
 * Return: nothing
*/
void reset_to_98(*m)
{
	&m = 98;

	return (0);
}
