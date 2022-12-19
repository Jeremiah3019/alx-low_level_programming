#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, c;

	if (*s != '\0')
	{
		c = 0;
		while (*(s + c) != '\0')
		{
			c++;
		}
		for (i = c - 1; i >= 0; i--)
			_putchar(*(s + i));
	}
	_putchar('\n');
}

