#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: binary tree
 * Return: height of the @tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

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

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to root node of tree to check
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	return (0);
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: binary tree
 * Return: 1 if @tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0);
}
