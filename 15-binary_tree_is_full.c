#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * (each node has 0 or 2 children)
 * @tree: root of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flg = 1;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{
		flg *= 1;
	}
	else
	{
		flg *= 0;
	}

	if (tree->right)
	{
		flg *= binary_tree_is_full(tree->right);
	}

	if (tree->left)
	{
		flg *= binary_tree_is_full(tree->left);
	}

	return (flg);
}
