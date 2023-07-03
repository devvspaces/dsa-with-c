# Data Structures

Data structures are a way of organizing and storing data so that they can be accessed and worked with efficiently. They define the relationship between the data, and the operations that can be performed on the data.

## Stack

A stack is a linear data structure that stores items in a Last-In/First-Out (LIFO) or First-In/Last-Out (FILO) manner. In stack, a new element is added at one end and an element is removed from that end only. The insert and delete operations are often called push and pop.

- `push()` - Insert an element at the top of the stack
- `pop()` - Remove an element from the top of the stack
- `peek()` - Get the top element of the stack
- `isEmpty()` - Check if the stack is empty
- `isFull()` - Check if the stack is full

## Queue

A queue is a linear data structure that stores items in a First In First Out (FIFO) manner. With a queue the least recently added item is removed first. A good example of queue is any queue of consumers for a resource where the consumer that came first is served first.

- `enqueue()` - Insert an element at the rear of the queue. Time complexity: O(1)
- `dequeue()` - Remove an element from the front of the queue. Time complexity: O(1)
- `peek()` - Get the value of the front of the queue without removing it. Time complexity: O(1)
- `isEmpty()` - Check if the queue is empty. Time complexity: O(1)

## Linked List

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

- `insertAtBeginning()` - Insert an element at the beginning of the linked list
- `insertAtEnd()` - Insert an element at the end of the linked list
- `deleteFromBeginning()` - Delete an element from the beginning of the linked list
- `deleteFromEnd()` - Delete an element from the end of the linked list
- `display()` - Display the linked list

## Doubly Linked List

A doubly linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a doubly linked list are linked using pointers in both directions.

- `insertAtBeginning()` - Insert an element at the beginning of the doubly linked list
- `insertAtEnd()` - Insert an element at the end of the doubly linked list
- `insertAtPosition()` - Insert an element at a given position in the doubly linked list
- `deleteFromBeginning()` - Delete an element from the beginning of the doubly linked list
- `deleteFromEnd()` - Delete an element from the end of the doubly linked list
- `deleteFromPosition()` - Delete an element from a given position in the doubly linked list
- `display()` - Display the doubly linked list

## Circular Linked List

A circular linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a circular linked list are linked using pointers in both directions. The last node of the list contains a pointer to the first node of the list.

- `insertAtBeginning()` - Insert an element at the beginning of the circular linked list
- `insertAtEnd()` - Insert an element at the end of the circular linked list
- `insertAtPosition()` - Insert an element at a given position in the circular linked list
- `deleteFromBeginning()` - Delete an element from the beginning of the circular linked list
- `deleteFromEnd()` - Delete an element from the end of the circular linked list
- `deleteFromPosition()` - Delete an element from a given position in the circular linked list
- `display()` - Display the circular linked list

## Binary Tree

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

- `insert()` - Insert an element in the binary tree
- `delete()` - Delete an element from the binary tree
- `search()` - Search an element in the binary tree
- `preorder()` - Traverse the binary tree in preorder
- `inorder()` - Traverse the binary tree in inorder
- `postorder()` - Traverse the binary tree in postorder
- `levelorder()` - Traverse the binary tree in levelorder

## Binary Search Tree

A binary search tree is a binary tree in which the value of each left child is less than or equal to the value of the parent node, and the value of each right child is greater than or equal to the value of the parent node.

- `insert()` - Insert an element in the binary search tree
- `delete()` - Delete an element from the binary search tree
- `search()` - Search an element in the binary search tree
- `preorder()` - Traverse the binary search tree in preorder
- `inorder()` - Traverse the binary search tree in inorder
- `postorder()` - Traverse the binary search tree in postorder
- `levelorder()` - Traverse the binary tree in levelorder

## Heap

A heap is a tree-based data structure in which all the nodes of the tree are in a specific order. A heap can be either a max heap or a min heap. In a max heap, the key at the root node must be maximum among all the keys present in the heap. The same property must be recursively true for all sub-trees in that Binary Tree. The heap is one maximally efficient implementation of an abstract data type called a priority queue.

- `insert()` - Insert an element in the heap
- `delete()` - Delete an element from the heap
- `display()` - Display the heap
- `heapify()` - Heapify the heap

## Hash Table

A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found.

- `insert()` - Insert an element in the hash table
- `delete()` - Delete an element from the hash table
- `search()` - Search an element in the hash table
- `display()` - Display the hash table

## Graph

A graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph.

- `insertVertex()` - Insert a vertex in the graph
- `deleteVertex()` - Delete a vertex from the graph
- `insertEdge()` - Insert an edge in the graph
- `deleteEdge()` - Delete an edge from the graph
- `display()` - Display the graph

## Trie

A trie, also called digital tree or prefix tree, is a kind of search tree—an ordered tree data structure used to store a dynamic set or associative array where the keys are usually strings.

- `insert()` - Insert a word in the trie
- `search()` - Search a word in the trie
- `delete()` - Delete a word from the trie

## Disjoint Set

A disjoint-set data structure is a data structure that keeps track of a set of elements partitioned into a number of disjoint (non-overlapping) subsets.

- `makeSet()` - Create a set with only one element
- `union()` - Combine two sets into a single set
- `find()` - Find the representative of a set

## Segment Tree

A segment tree is a tree data structure for storing intervals, or segments. It allows querying which of the stored segments contain a given point.

- `build()` - Build a segment tree
- `update()` - Update an element in the segment tree
- `query()` - Query an interval in the segment tree

## AVL Tree

An AVL tree is a self-balancing binary search tree. In an AVL tree, the heights of the two child subtrees of any node differ by at most one.

- `insert()` - Insert an element in the AVL tree
- `delete()` - Delete an element from the AVL tree
- `search()` - Search an element in the AVL tree
- `preorder()` - Traverse the AVL tree in preorder
- `inorder()` - Traverse the AVL tree in inorder
- `postorder()` - Traverse the AVL tree in postorder
- `levelorder()` - Traverse the AVL tree in levelorder

## Red Black Tree

A red–black tree is a kind of self-balancing binary search tree. Each node stores an extra bit representing color, used to ensure that the tree remains approximately balanced during insertions and deletions.

- `insert()` - Insert an element in the red black tree
- `delete()` - Delete an element from the red black tree
- `search()` - Search an element in the red black tree
- `preorder()` - Traverse the red black tree in preorder
- `inorder()` - Traverse the red black tree in inorder
- `postorder()` - Traverse the red black tree in postorder
- `levelorder()` - Traverse the red black tree in levelorder

## B Tree

A B-tree is a self-balancing tree data structure that maintains sorted data and allows searches, sequential access, insertions, and deletions in logarithmic time.

- `insert()` - Insert an element in the B tree
- `delete()` - Delete an element from the B tree
- `search()` - Search an element in the B tree
- `display()` - Display the B tree

## B+ Tree

A B+ tree is an N-ary tree with a variable but often large number of children per node. A B+ tree consists of a root, internal nodes and leaves. The root may be either a leaf or a node with two or more children.

- `insert()` - Insert an element in the B+ tree
- `delete()` - Delete an element from the B+ tree
- `search()` - Search an element in the B+ tree
- `display()` - Display the B+ tree

## Fenwick Tree

A Fenwick tree or binary indexed tree is a data structure that can efficiently update elements and calculate prefix sums in a table of numbers.

- `build()` - Build a Fenwick tree
- `update()` - Update an element in the Fenwick tree
- `query()` - Query an interval in the Fenwick tree
- `display()` - Display the Fenwick tree

## Suffix Array

A suffix array is a sorted array of all suffixes of a given string. It is a data structure used, among others, in full text indices, data compression algorithms and within the field of bibliometrics.

- `build()` - Build a suffix array
- `display()` - Display the suffix array
- `search()` - Search a pattern in the suffix array

## Suffix Tree

A suffix tree is a compressed trie containing all the suffixes of the given text as their keys and positions in the text as their values.

- `build()` - Build a suffix tree
- `display()` - Display the suffix tree
- `search()` - Search a pattern in the suffix tree

## Sparse Table

A sparse table is a data structure that allows answering range queries. It can answer most range queries in O(logn) time and can be modified in O(nlogn) time.

- `build()` - Build a sparse table
- `query()` - Query an interval in the sparse table
- `display()` - Display the sparse table
