
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: the number of matching bytes at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *p;
	int found;

	count = 0;
	while (s[count] != '\0')
	{
		p = accept;
		found = 0;

		while (*p != '\0')
		{
			if (s[count] == *p)
			{
				found = 1;
				break;
			}
			p++;
		}

		if (found == 0)
			break;

		count++;
	}

	return (count);
}
