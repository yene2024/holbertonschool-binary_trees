#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_t - Binary tree node structure
 *
 * @n: Integer value stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

typedef struct binary_tree_t
{
int n;
struct binary_tree_t *parent;
struct binary_tree_t *left;
struct binary_tree_t *right;
}
binary_tree_t;

/* Function prototype for binary_tree_node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function prototype for binary_tree_print */
void binary_tree_print(const binary_tree_t *tree);

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
#endif /* BINARY_TREES_H */
