#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != 0)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
