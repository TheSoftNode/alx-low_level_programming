#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i,  j,  k;

	i = 0;

	while (i <= 9)
	{
		j = 1;

		while (j <= 9)
		{
			k = 2;

			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
