#include "stdio.h"

/**
 * main - prints "Fizz" for numbers divisible by 3,
 * prints "Buzz" for numbers divisible by 5,
 * prints "FizzBuzz" for numbers divisible by 3 and 5
 * for numbers 1-100
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
	}
	printf("Buzz\n");
	return (0);
}
