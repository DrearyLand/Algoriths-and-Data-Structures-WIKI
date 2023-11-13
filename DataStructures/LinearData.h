#ifndef LINEARDATA_H
#define LINEARDATA_H

#include <iostream>
#include <unistd.h>

using namespace std;

/**
 * @struct Node
 * @brief Structure representing a node in the stack.
 */
struct Node {
  int data;       ///< Data stored in the node.
  Node *next;     ///< Pointer to the next node in the stack.
  Node *previous; ///< Pointer to the previous node in the stack.
};

struct B_Node {
  int data;
  B_Node* left;
  B_Node* right;

  B_Node(int value) : data(value), left(nullptr), right(nullptr) {}
  B_Node() : data(0), left(nullptr), right(nullptr) {}
};

/**
 * @brief Get a random number.
 * @return The number generated with rand.
 */
int randomNum() { return rand() % 100; }

#endif