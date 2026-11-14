
#include "main.h"

/**
 * _strpbrk - searches a string for any accepted byte
 * @s: the string to search
 * @accept: the characters to search for
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);

			p++;
		}

		s++;
	}

	return (0);
}
