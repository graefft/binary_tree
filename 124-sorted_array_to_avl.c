#include "binary_trees.h"


/**
 * avl_rec - function that builds an AVL tree from an array
 * @array: sorted array
 * @l: left index
 * @r: right index
 * @root: root of the AVL tree
 * Return: Nothing
 */
avl_t *avl_rec(int *array, int l, int r)
{
	avl_t *root;
	int mid;

	if (l > r)
		return (NULL);

	mid = (r + l) / 2;
	root = binary_tree_node(NULL, array[mid]);

	root->left = avl_rec(array, l, mid - 1);
	if (root->left)
		root->left->parent = root;

	root->right = avl_rec(array, mid + 1, r);
	if (root->right)
		root->right->parent = root;

	return (root);
}


/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 * @array: sorted array
 * @size: size of the @array
 * Return: AVL tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL)
		return (NULL);

	return (avl_rec(array, 0, size - 1));
}
