#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as the right child of a parent
 *                            node
 * @parent: pointer to the parent node
 * @value: value to be stored in the new node
 *
 * Return: pointer to the new right child node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_t;

	if (!parent)
		return (NULL);

	new_t = malloc(sizeof(binary_tree_t));
	if (!new_t)
		return (NULL);

	new_t->n = value;
	new_t->parent = parent;
	new_t->left = NULL;
	new_t->right = parent->right;
	parent->right = new_t;
	if (new_t->right)
		new_t->right->parent = new_t;
	return (new_t);
}
