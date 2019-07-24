#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs left-rotation on bt
 * @tree: pointer to root node of the tree to rotate
 * Return: new root node of tree after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y = NULL;

	if (!tree)
		return (NULL);

	y = tree->right;
	tree->right = y->left;
	tree->parent = y;
	y->left = tree;
	y->parent = NULL;

	return (y);
}
