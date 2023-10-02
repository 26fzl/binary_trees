#include "binary_trees.h"

/**
 * binary_tree_size - measures the size (number of nodes) of a binary tree
 * @tree: root of the tree to measure
 * Return: size of the tree, 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rght = 0, lft = 0;

	if (!tree)
		return (0);

	if (tree->rght)
		rght = binary_tree_size(tree->rght);

	if (tree->lft)
		lft = binary_tree_size(tree->lft);

	return (lft + rght + 1);
}
