#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_lft, h_rght;

	if (!tree)
		return (0);

	h_lft = tree->left ? (int)binary_tree_height(tree->left) : -1;
	h_rght = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (h_lft - h_rght);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_lft = 0;
	size_t h_rght = 0;

	if (!tree)
		return (0);

	h_lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_rght = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_lft > h_rght ? h_lft : h_rght);
}
