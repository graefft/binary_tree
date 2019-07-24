#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *cur = NULL, *new = NULL;

	if (tree == NULL)
		return (NULL);

	new = binary_tree_node(NULL, value);
	if (*tree == NULL)
	{
		*tree = new;
		return (*tree);
	}
	cur = *tree;
	while (cur != NULL)
	{
		if (value == cur->n)
			return (NULL);
		if (value < cur->n)
		{
			if (!cur->left)
			{
				new->parent = cur;
				cur->left = new;
				return (new);
			}
			cur = cur->left;
		}

		else if (value > cur->n)
		{
			if (!cur->right)
			{
				new->parent = cur;
				cur->right = new;
				return (new);
			}

			cur = cur->right;
		}
	}
	return (NULL);
}
