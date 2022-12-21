#include "main.h"

/**
 * _strncat - function that concatinates two strings
 * @dest: pointer to destination string
 * @src: pointer to a string
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;
	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (length);
	*dest = *cat;
	return (cat);
}
