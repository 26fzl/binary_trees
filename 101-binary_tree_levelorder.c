#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverst a binary tree using level-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *binary_list[1024], *temp;
	int x = 0, y = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	for (x = 0; x < 1024; x++)
	{
		binary_list[x] = NULL;
	}
	binary_list[0] = (binary_tree_t *)tree;
	x = 0;
	while (binary_list[x] != NULL)
	{
		temp = binary_list[x];
		func(temp->n);
		if (temp->left != NULL)
		{
			y++;
			binary_list[y] = temp->left;
		}
		if (temp->right != NULL)
		{
			y++;
			binary_list[y] = temp->right;
		}
		x++;
	}
}
