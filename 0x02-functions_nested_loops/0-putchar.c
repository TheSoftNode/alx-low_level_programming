#include "main.h"

/**
 * main - Prints -putchar to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p);

		p++;
	}

	return (0);
}
