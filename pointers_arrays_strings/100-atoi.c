
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int number;
	int digit;
	int limit;

	i = 0;
	sign = 1;
	number = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	limit = (sign == -1) ? INT_MIN : -INT_MAX;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (number < limit / 10)
			return (sign == -1 ? INT_MIN : INT_MAX);

		number *= 10;

		if (number < limit + digit)
			return (sign == -1 ? INT_MIN : INT_MAX);

		number -= digit;
		i++;
	}

	if (sign == -1)
		return (number);

	return (-number);
}
