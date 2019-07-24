#include "binary_trees.h"

/**
 * bst_search - function that searches for a value in a BST
 * @tree: pointer to root node of BST to search
 * @value: value to search for
 * Return: pointer to node containing value equal to 'value' or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);
	else if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
