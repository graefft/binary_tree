#include "binary_trees.h"

/**
 * find_min - function to find minimum of subtree
 * @root: root of subtree
 * Return: minimum
 */
bst_t *find_min(bst_t *root)
{
	if (root == NULL)
		return (NULL);

	while (root->left != NULL)
		root = root->left;

	return (root);
}

/**
 * bst_remove - function that removes a node from a Binary Search Tree
 * @root: pointer to root node of tree to remove node from
 * @value: value to remove in tree
 * Return: pointer to new root node of tree after removing value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *cur = NULL;

	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);

	else if (value > root->n)
		root->right = bst_remove(root->right, value);

	else
	{
		if (!root->left && !root->right)
		{
			free(root);
			return (NULL);
		}
		else if (!root->left || !root->right)
		{
			cur = root;
			if (root->right)
				root = cur->right;
			else if (root->left)
				root = cur->left;
			if (cur->parent->left == cur)
				cur->parent->left = root;
			else
				cur->parent->right = root;
			root->parent = cur->parent;
			free(cur);
		}
		else
		{
			cur = find_min(root->right);
			root->n = cur->n;
			root->right = bst_remove(root->right, cur->n);
		}
	}
	return (root);
}
