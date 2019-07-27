#include "binary_trees.h"

/**
 * heap_to_sorted_array - Prints an array of integers
 * @heap: The array to be printed
 * @size: Number of elements in @array
 * Return: new sorted array
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *arr = NULL, temp;
	size_t s = 1;
	heap_t *cur = NULL;

	if (!heap)
		return (0);
	cur = heap;
	while (cur)
	{
		arr = realloc(arr, sizeof(int) * s);
		if (!arr)
			return (NULL);
		temp = heap_extract(&cur);
		arr[s - 1] = temp;
		*size = s;
		if (cur == NULL)
		{
			break;
		}
		s++;
	}
	return (arr);
}
