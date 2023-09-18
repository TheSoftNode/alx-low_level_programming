#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: parameter to test
 *
 * Return: 1 or 0 (Successfull)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
