#include "binary_trees.h"

/**
 * array_to_heap - function that builds a Max Binary Heap tree from an array
 * @array: array to be converted
 * @size: size of the @array
 * Return: heap from array
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i = 0;
	heap_t *tree = NULL;

	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		heap_insert(&tree, array[i]);
		i++;
	}
	return (tree);
}
