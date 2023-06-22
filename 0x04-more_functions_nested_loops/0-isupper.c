#include "main.h"

/**
 * _isupper - checks for lowercase character
 *
 * @c: parameter to test
 *
 * Return: 1 or 0 (Successfull)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
