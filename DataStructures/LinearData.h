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

/**
 * @brief Get a random number.
 * @return The number generated with rand.
 */
int randomNum() { return rand() % 100; }

#endif