#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet = 'a';
	char upper_alphabet = 'A';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);

		lower_alphabet++;
	}

	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);

		upper_alphabet++;
	}

	putchar('\n');

	return (0);

}
