#inlude "main.h"

/**
 * puts2 - prints a string followed by a new line
 * @str: pointer to string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
