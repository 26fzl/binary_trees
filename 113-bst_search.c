#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree (BST)
 * @tree: root of the BST to search
 * @value: value to search for
 * Return: pointer to the node containing the value,
 * or NULL if not found or if tree is NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node_n = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node_n)
	{
		if (value == node_n->n)
			return (node_n);
		if (value < node_n->n)
			node_n = node_n->left;
		else if (value > node_n->n)
			node_n = node_n->right;
	}

	return (NULL);
}
