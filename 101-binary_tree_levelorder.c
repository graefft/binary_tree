#include "binary_trees.h"

/**
 * print_level - function that goes through a binary tree
 * using level-order traversal
 * @root: binary tree
 * @level: level of @root
 * @func: pointer to a function to call for each node
 * Return: true or false
 */
int print_level(binary_tree_t *root, int level, void (*func)(int))
{
	int left, right;

	if (root == NULL)
		return (0);

	if (level == 1)
	{
		func(root->n);
		return (1);
	}
	left = print_level(root->left, level - 1, func);
	right = print_level(root->right, level - 1, func);

	return (left || right);
}


/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: binary tree
 * @func: pointer to a function to call for each node
 * Return: Nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 1;

	if (!tree || !func)
		return;
	while (print_level((binary_tree_t *)tree, level, func))
		level++;
}
