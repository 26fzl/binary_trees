#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new left node
 * @parent: parent node
 * @value: value for the new node
 * Return: address of the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_t;

	if (!parent)
		return (NULL);

	new_t = malloc(sizeof(binary_tree_t));
	if (!new_t)
		return (NULL);

	new_t->n = value;
	new_t->parent = parent;
	new_t->right = NULL;
	new_t->left = parent->left;
	parent->left = new_t;
	if (new_t->left)
		new_t->left->parent = new_t;
	return (new_t);
}
