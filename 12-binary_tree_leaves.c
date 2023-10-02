#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rght_leaves, lft_leaves;

	if (!tree)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}

	rght_leaves = binary_tree_leaves(tree->right);
	lft_leaves = binary_tree_leaves(tree->left);

	return (rght_leaves + lft_leaves);
}
