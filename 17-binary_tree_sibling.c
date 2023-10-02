#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node in a binary tree
 * @node: node to find the sibling of
 * Return: pointer to the sibling node, or NULL if none or if node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
