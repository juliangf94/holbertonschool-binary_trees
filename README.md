# holbertonschool-binary_trees

This repository contains C implementations of various functions for working with basic Binary Trees. The implementations cover core operations such as creation, insertion, deletion, traversals (pre-order, in-order, post-order), and utility functions for calculating size, height, depth, and checking properties like balance, fullness, and perfection.

All functions are implemented to handle standard C Binary Tree node structures and adhere to strict error handling requirements (e.g., handling NULL inputs).

| File | Description | Function Prototype |
| --- | --- | --- |
| `binary_trees.h` | Header file containing the `binary_tree_t` structure definition and all function prototypes. | N/A |
| `0-binary_tree_node.c` | Creates a new binary tree node. | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` |
| `1-binary_tree_insert_left.c` | Inserts a node as the left-child of another node. | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` |
| `2-binary_tree_insert_right.c` | Inserts a node as the right-child of another node. | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` |
| `3-binary_tree_delete.c` | Deletes an entire binary tree using recursion. | `void binary_tree_delete(binary_tree_t *tree);` |
| `4-binary_tree_is_leaf.c` | Checks if a given node is a leaf. | `int binary_tree_is_leaf(const binary_tree_t *node);` | 
| `5-binary_tree_is_root.c` | Checks if a given node is the root. | `int binary_tree_is_root(const binary_tree_t *node);` |
| `6-binary_tree_preorder.c` | Performs a pre-order traversal on the binary tree. | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` |
| `7-binary_tree_inorder.c` | Performs an in-order traversal on the binary tree. | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` |
| `8-binary_tree_postorder.c` | Performs a post-order traversal on the binary tree. | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` |
| `9-binary_tree_height.c` | Measures the height of a binary tree. | `size_t binary_tree_height(const binary_tree_t *tree);` |
| `10-binary_tree_depth.c` | Measures the depth of a node in a binary tree. | `size_t binary_tree_depth(const binary_tree_t *tree);` |
| `11-binary_tree_size.c` | Measures the size (total number of nodes) of a binary tree. | `size_t binary_tree_size(const binary_tree_t *tree);` |
| `12-binary_tree_leaves.c` | Counts the leaves in a binary tree. | `size_t binary_tree_leaves(const binary_tree_t *tree);` | 
| `13-binary_tree_nodes.c` | Counts the nodes with at least 1 child in a binary tree. | `size_t binary_tree_nodes(const binary_tree_t *tree);` |
| `14-binary_tree_balance.c` | Measures the balance factor of a binary tree. | `int binary_tree_balance(const binary_tree_t *tree);` |
| `15-binary_tree_is_full.c` | Checks if a binary tree is full. | `int binary_tree_is_full(const binary_tree_t *tree);` |
| `16-binary_tree_is_perfect.c` | Checks if a binary tree is perfect. | `int binary_tree_is_perfect(const binary_tree_t *tree);` |
| `17-binary_tree_sibling.c` | Finds the sibling of a node. | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);` |
| `18-binary_tree_uncle.c` | Finds the uncle of a node. | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);` |
