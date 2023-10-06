#include "binary_trees.h"

/**
 * binary_tree_is_bst - check binary tree if it is a valid Binary Search Tree
 * @tree: a pointer to the root
 *
 * Return: 1 if tree is a valid BST or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - checks binary tree if it is a valid Binary Search Tree
 * @tree: a pointer
 * @min: Lower bound of checked nored
 * @max: Upper bound of checked nodes
 *
 * Return: 1 if tree is a valid BST or 0
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}
