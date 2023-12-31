#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: parameter to test
 *
 * Return: 1 or 0 or -1 (Successfull)
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');

	return (n);
}
