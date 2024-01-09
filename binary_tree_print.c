#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		printf("%d\n", tree->n);
		if (tree->left != NULL || tree->right != NULL)
		{
			printf("Left:\n");
			binary_tree_print(tree->left);
			printf("Right:\n");
			binary_tree_print(tree->right);
		}
	}
}

