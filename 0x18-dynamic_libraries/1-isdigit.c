#include "main.h"
/**
 * _isdigit - Check for a digit (0-9)
 * @c: test int character
 *
 * Return: 0 or 1 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
