#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs right-rotation on bt
 * @tree: pointer to root node of the tree to rotate
 * Return: new root node of tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x = NULL;

	if (!tree)
		return (NULL);

	x = tree->left;
	x->parent = NULL;
	tree->parent = x;
	tree->left = x->right;

	if (x->right)
		x->right->parent = tree;

	x->right = tree;
	return (x);
}
