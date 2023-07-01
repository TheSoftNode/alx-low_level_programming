#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int n1, n2, next;
	int i;

	n1 = 1;
	n2 = 2;
	next = 0;

	printf("%lli, %lli, ", n1, n2);

	for (i = 2; i < 49; i++)
	{
		next = n1 + n2;

		printf("%lli", next);

		if (i != 48)
			printf(", ");

		n1 = n2;
		n2 = next;
	}

	printf("\n");

	return (0);
}
