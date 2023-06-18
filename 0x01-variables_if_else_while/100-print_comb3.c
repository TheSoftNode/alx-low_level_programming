#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;

	while (i <= 9)
	{
		j = 1;

		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
