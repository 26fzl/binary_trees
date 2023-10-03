#include "binary_trees.h"

/**
 * bst_insert - inserts a value into a Binary Search Tree (BST)
 * @tree: double pointer to the root node of the BST
 * @value: value to be inserted
 *
 * Return: pointer to the newly inserted node, or NULL on failure
 *	 or duplicate value
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = NULL;
	bst_t *secd = NULL;
	bst_t *new = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	temp = *tree;
	while (temp)
	{
		secd = temp;
		if (value < temp->n)
			temp = temp->left;
		else if (value > temp->n)
			temp = temp->right;
		else if (value == temp->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (secd == NULL)
		secd = new;
	else if (value < secd->n)
	{
		secd->left = new;
		new->parent = secd;
	}
	else
	{
		secd->right = new;
		new->parent = secd;
	}

	return (new);
}
