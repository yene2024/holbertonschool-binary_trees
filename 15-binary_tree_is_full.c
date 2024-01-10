#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 if tree is NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);

	full = (tree->left && tree->right) ? 1 : 0;
	full = (full && binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right)) ? 1 : 0;

	return (full);
}
