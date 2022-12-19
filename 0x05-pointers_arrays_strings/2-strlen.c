#include "main.h"

/**
 * _strlen - prints length of string
 * @s: pointer to the string to check
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i += 1;
		s += 1;
	}
	return (0);
}

