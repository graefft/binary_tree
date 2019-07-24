#include "binary_trees.h"
#include <limits.h>

/**
 * isBST - helper function
 * @node: binary tree
 * @min: min in the left subtree
 * @max: max in the right subtree
 * Return: 1 or 0
 */
int isBST(binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return 1;
	if (node->n < min || node->n > max)
		return 0;
	return
		isBST(node->left, min, node->n-1) &&
		isBST(node->right, node->n+1, max);
}

/**
 * binary_tree_is_bst - function that checks if a binary tree is a
 * valid Binary Search Tree
 * @tree: binary tree
 * Return: 1 if @tree is BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isBST((binary_tree_t *)tree, INT_MIN, INT_MAX));
}
