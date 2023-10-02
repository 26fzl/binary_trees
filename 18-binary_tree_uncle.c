#include "binary_trees.h"
/**
 * binary_tree_sibling -  creates a binary tree node.
 *
 * @node: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle -  creates a binary tree node.
 *
 * @node: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (!node || !node->parent)
                return (NULL);

        return (binary_tree_sibling(node->parent));
}
