#ifndef BINARY_TREES_H
#define BINARY_TREES_H
typedef struct binary_trees_s
{
  int n;
  struct binary_trees_s *parent;
  struct binary_trees_s *left;
  struct binary_trees_S *right;
}
binary_tree_t;

/* Function prototype for binary_tree_node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function prototype for binary_tree_print */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
