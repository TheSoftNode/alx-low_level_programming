#include "main.h"

/**
 * less_than_10 - prints for values less than 10
 *
 * @tm: number to evaluate
 */

void less_than_10(int tm)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(tm + '0');
}


/**
 * less_than_100 - prints for values greater than 10 but less than 100
 *
 * @tm: number to evaluate
 */

void less_than_100(int tm)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((tm / 10) + '0');
	_putchar((tm % 10) + '0');
}


/**
 * greater_than_100 - prints for values not less than 100
 *
 * @tm: number to evaluate
 */

void greater_than_100(int tm)
{
	_putchar(',');
	_putchar(' ');
	_putchar((tm / 100) + '0');
	_putchar(((tm / 10) % 10) + '0');
	_putchar((tm % 10) + '0');
}


/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number of times table to produce
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, tm;

	if (n >= 0 && n <= 15)
	{
		i = 0;

		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				tm = i * j;

				if (j == 0)
				{
					_putchar(tm + '0');
				}
				else if (tm < 10 && j != 0)
				{
					less_than_10(tm);
				}
				else if (tm >= 10 && tm < 100)
				{
					less_than_100(tm);
				}
				else if (tm >= 100)
				{
					greater_than_100(tm);
				}

				j++;
			}

			_putchar('\n');

			i++;
		}
	}
}
