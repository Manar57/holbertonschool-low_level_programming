#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int num;

	num = n;

	if (n <= 98)
	{
		while (num <= 98)
		{
			printf("%d", num);

			if (num != 98)
				printf(", ");

			num++;
		}
	}
	else
	{
		while (num >= 98)
		{
			printf("%d", num);

			if (num != 98)
				printf(", ");

			num--;
		}
	}

	printf("\n");
}
