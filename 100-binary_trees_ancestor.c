#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node to find the ancestor
 * @second: a pointer to the second node to find the ancestor
 *
 * Return: pointer to the ancestor node
 *         NULL if there is no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *first_ac, *second_ac;

	for (first_ac = first; first_ac; first_anc = first_ac->parent)
		for (second_ac = second; second_ac; second_ac = second_ac->parent)
			if (first_ac == second_ac)
				return ((binary_tree_t *)first_ac);
	return (NULL);
}
