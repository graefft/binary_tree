#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to root node of the tree to measure balance
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);
	else
		left = 0;

	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);
	else
		right = 0;

	return (left - right);
}
