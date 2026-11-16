#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: first value (included)
 * @max: last value (included)
 *
 * Return: pointer to the new array, or NULL if it fails or min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int size, i;

	if (min > max)
		return (NULL);

	size = (unsigned int)max - (unsigned int)min + 1;
	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = (int)((unsigned int)min + i);

	return (arr);
}
