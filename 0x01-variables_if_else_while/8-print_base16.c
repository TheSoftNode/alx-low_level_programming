#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char letter;

	digit = 0;
	letter = 'a';

	while (digit < 10)
	{
		putchar(digit +  '0');

		digit++;
	}

	while (letter <= 'f')
	{
		putchar(letter);

		letter++;
	}

	putchar('\n');

	return (0);
}
