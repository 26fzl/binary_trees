#include "binary_trees.h"

/**
 * array_to_bst - constructs a Binary Search Tree (BST) from an array
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 *
 * Return: pointer to the root node of the BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int x;
	bst_t *root_n = NULL;

	for (x = 0; x < size; x++)
		bst_insert(&root_n, array[x]);

	return (root_n);
}
