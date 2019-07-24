#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: binary tree
 * Return: height of the @tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (-1);
	if (tree->left)
	{
		l_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		l_height = 0;
	}

	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);
	else
	{
		r_height = 0;
	}

	if (l_height > r_height)
		return (l_height);
	return (r_height);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to root node of the tree to measure balance
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
