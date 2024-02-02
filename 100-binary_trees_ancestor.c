#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *firstnd, *secondnd;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	firstnd = first->parent, secondnd = second->parent;
	if (first == secondnd || !firstnd || (!mom->parent && pop))
		return (binary_trees_ancestor(first, secondnd));
	else if (firstnd == second || !secondnd || (!pop->parent && mom))
		return (binary_trees_ancestor(firstnd, second));
	return (binary_trees_ancestor(firstnd, secondnd));
}
