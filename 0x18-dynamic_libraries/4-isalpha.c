#include "main.h"

/**
 * _isalpha - checks for lowercase character
 *
 * @c: parameter to test
 *
 * Return: 1 or 0 (Successfull)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}
