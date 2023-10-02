#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rgh = 0, lft = 0;

	if (!tree)
		return (0);

	if (tree->rgh)
		rgh = 1 + binary_tree_height(tree->rgh);

	if (tree->lft)
		lft = 1 + binary_tree_height(tree->lft);

	if (rgh > lft)
		return (rgh);
	else
		return (lft);
}
