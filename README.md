# 0x1D. C - Binary trees

## Description
What you should learn from this project:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

---

### [0. New node](./0-binary_tree_node.c)
Write a function that creates a binary tree node
* Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
* Where parent is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or NULL on failure
```
alex@/tmp/binary_trees$ cat 0-main.c
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
alex@/tmp/binary_trees$
```

### [1. Insert left](./1-binary_tree_insert_left.c)
Write a function that inserts a node as the left-child of another node
* Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
* Where parent is a pointer to the node to insert the left-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
```
alex@/tmp/binary_trees$ cat 1-main.c 
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
alex@/tmp/binary_trees$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)                                            
alex@/tmp/binary_trees$
```

### [2. Insert right](./2-binary_tree_insert_right.c)
* Write a function that inserts a node as the right-child of another node


### [3. Delete](./3-binary_tree_delete.c)
* Write a function that deletes an entire binary tree


### [4. Is leaf](./4-binary_tree_is_leaf.c)
* Write a function that checks if a node is a leaf


### [5. Is root](./5-binary_tree_is_root.c)
* Write a function that checks if a given node is a root


### [6. Pre-order traversal](./6-binary_tree_preorder.c)
* Write a function that goes through a binary tree using pre-order traversal


### [7. In-order traversal](./7-binary_tree_inorder.c)
* Write a function that goes through a binary tree using in-order traversal


### [8. Post-order traversal](./8-binary_tree_postorder.c)
* Write a function that goes through a binary tree using post-order traversal


### [9. Height](./9-binary_tree_height.c)
* Write a function that measures the height of a binary tree


### [10. Depth](./10-binary_tree_depth.c)
* Write a function that measures the depth of a node in a binary tree


### [11. Size](./11-binary_tree_size.c)
* Write a function that measures the size of a binary tree


### [12. Leaves](./12-binary_tree_leaves.c)
* Write a function that counts the leaves in a binary tree


### [13. Nodes](./13-binary_tree_nodes.c)
* Write a function that counts the nodes with at least 1 child in a binary tree


### [14. Balance factor](./14-binary_tree_balance.c)
* Write a function that measures the balance factor of a binary tree


### [15. Is full](./15-binary_tree_is_full.c)
* Write a function that checks if a binary tree is full


### [16. Is perfect](./16-binary_tree_is_perfect.c)
* Write a function that checks if a binary tree is perfect


### [17. Sibling](./17-binary_tree_sibling.c)
* Write a function that finds the sibling of a node


### [18. Uncle](./18-binary_tree_uncle.c)
* Write a function that finds the uncle of a node


### [19. Lowest common ancestor](./100-binary_trees_ancestor.c)
* Write a function that finds the lowest common ancestor of two nodes


### [20. Level-order traversal](./101-binary_tree_levelorder.c)
* Write a function that goes through a binary tree using level-order traversal


### [21. Is complete](./102-binary_tree_is_complete.c)
* Write a function that checks if a binary tree is complete


### [22. Rotate left](./103-binary_tree_rotate_left.c)
* Write a function that performs a left-rotation on a binary tree


### [23. Rotate right](./104-binary_tree_rotate_right.c)
* Write a function that performs a right-rotation on a binary tree


### [24. Is BST](./110-binary_tree_is_bst.c)
* Write a function that checks if a binary tree is a valid Binary Search Tree


### [25. BST - Insert](./111-bst_insert.c)
* Write a function that inserts a value in a Binary Search Tree


### [26. BST - Array to BST](./112-array_to_bst.c)
* Write a function that builds a Binary Search Tree from an array


### [27. BST - Search](./113-bst_search.c)
* Write a function that searches for a value in a Binary Search Tree


### [28. BST - Remove](./114-bst_remove.c)
* Write a function that removes a node from a Binary Search Tree


### [29. Big O #BST](./115-O)
* What are the average time complexities of those operations on a Binary Search Tree (one answer per line):


### [30. Is AVL](./120-binary_tree_is_avl.c)
* Write a function that checks if a binary tree is a valid AVL Tree


### [31. AVL - Insert](./121-avl_insert.c)
* Write a function that inserts a value in an AVL Tree


### [32. AVL - Array to AVL](./122-array_to_avl.c)
* Write a function that builds an AVL tree from an array


### [33. AVL - Remove](./123-avl_remove.c)
* Write a function that removes a node from an AVL tree


### [34. AVL - From sorted array](./124-sorted_array_to_avl.c)
* Write a function that builds an AVL tree from an array


### [35. Big O #AVL Tree](./125-O)
* What are the average time complexities of those operations on an AVL Tree (one answer per line):


### [36. Is Binary heap](./130-binary_tree_is_heap.c)
* Write a function that checks if a binary tree is a valid Max Binary Heap


### [37. Heap - Insert](./131-heap_insert.c)
* Write a function that inserts a value in Max Binary Heap


### [38. Heap - Array to Binary Heap](./132-array_to_heap.c)
* Write a function that builds a Max Binary Heap tree from an array


### [39. Heap - Extract](./133-heap_extract.c)
* Write a function that extracts the root node of a Max Binary Heap


### [40. Heap - Sort](./134-heap_to_sorted_array.c)
* Write a function that converts a Binary Max Heap to a sorted array of integers


### [41. Big O #Binary Heap](./135-O)
* What are the average time complexities of those operations on a Binary Heap (one answer per line):

---

## Author
* **Thomas Graeff** - [graefft](https://github.com/graefft)
* **Farrukh Akhrarov** - [narnat](https://github.com/narnat)
