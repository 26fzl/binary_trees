#include "binary_trees.h"

/**
 * binary_tree_size - measures the size (number of nodes) of a binary tree
 * @tree: root of the tree to measure
 * Return: size of the tree, 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		h_right = binary_tree_size(tree->right);

	if (tree->left)
		h_left = binary_tree_size(tree->left);

	return (h_left + h_right + 1);
}
