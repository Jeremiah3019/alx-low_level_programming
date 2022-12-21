#include "main.h"

/**
 * reverse_array - revereses an array
 * @a: pointer to array
 * @n: number of elements of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int counter = 0;

	while (counter < n / 2)
	{
		/*if you have an  array of n elements the last element is at n - 1*/
		swap_int(a + counter, a + (n - counter - 1));
		counter++;
	}
}
