#include "main.h"
#include <unistd.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: target char
 * Return: pointer to first occurrence of c or NULL if char not found
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
		{
			if (c == *s)
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
