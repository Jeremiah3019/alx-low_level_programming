#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, c;
	char swap;

	if (*s != '\0')
	{
		c = 0;
		while (*(s + c) != '\0')
		{
			c++;
		}
		i = 0;
		c = c - 1;
		while (i <= c)
		{
			swap = *(s + i); /* swap = first */
			*(s + i) = *(s + c); /* first = last */
			*(s + c) = swap; /* last = swap (first) */
			i++;
			c--;
		}
	}
}
