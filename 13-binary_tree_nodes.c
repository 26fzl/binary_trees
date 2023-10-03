#include "binary_trees.h"

/**
 * binary_tree_nodes-counts the nodes with at least one child in a binary tree
 * @tree: root of the tree to count nodes
 * Return: number of nodes with at least one child, 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		count += 1;
	}
	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);
	return (count);
}
