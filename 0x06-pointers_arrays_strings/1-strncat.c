#include "main.h"

/**
 * _strncat - concatenate the string of two
 * @dest: pointer to destination sring
 * @src: pointer to source string
 * @n: number of byte to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	return (dest);
}
