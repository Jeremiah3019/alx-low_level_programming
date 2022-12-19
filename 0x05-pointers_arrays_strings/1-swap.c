#include "main.h"

/**
 * swap_int - swap variable values
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
