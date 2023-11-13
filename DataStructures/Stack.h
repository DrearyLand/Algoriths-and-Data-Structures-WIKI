#include <iostream>
#include "LinearData.h"

using namespace std;

/**
 * @class Stack
 * @brief A class representing a stack data structure.
 */
class Stack {
private:
  Node *stack = nullptr; ///< Pointer to the top of the stack.
  Node *temp;            ///< Temporary pointer used in stack operations.
  int stackChoice, data, len; ///< Variables used for user input and temporary data storage.

public:
  /**
   * @brief Displays the stack menu and performs stack operations based on user
   * input.
   */
  void stackMenu() {
    system("clear");
    cout << "\nWelcome to Stacks\n\n";
    cout << "What fuction you want to try? " << endl;
    cout << "1. Add data manually." << endl;
    cout << "2. Generate random data." << endl;
    cout << "3. View current Stack. " << endl;
    cout << "4. Remove last element." << endl;
    cout << "5. Remove all data." << endl;
    cout << "6. Return back" << endl;
    cout << "Select an option: ";

    cin >> stackChoice;
    system("clear");

    switch (stackChoice) {
    case 1:
      cout << "How many items would you like to add to the stack: ";
      cin >> len;
      while (len > 0) {
        cout << "Type the number that you want to add: ";
        cin >> data;
        addNode(data);
        len--;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      stackMenu();
      break;

    case 2:
      cout << "How many items would you like to add to the stack: ";
      cin >> len;
      while (len > 0) {
        addNode(randomNum());
        len--;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      stackMenu();
      break;

    case 3:
      cout << "Current Stack: \n";
      if (stack == NULL) {
        cout << "\nNo data on the Stack. Try adding some numbers.\n\n";
      } else {
        temp = stack; // Use a temporary pointer
        while (temp != NULL) {
          cout << "[" << temp->data << "]" << endl;
          temp = temp->next;
        }
        cout << endl;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      stackMenu();
      break;

    case 4:
      if (stack != NULL) {
        remove(stack, data);
        cout << "Removed element: " << data << endl;
      } else {
        cout << "The stack is empty." << endl;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      stackMenu();
      break;

    case 5:
      cout << "Removing the elements of the stack: " << endl;
      while (stack != NULL) {
        remove(stack, data);
        if (stack != NULL) {
          cout << data << " , ";
        } else {
          cout << data << ".";
        }
      }
      cout << endl;
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      stackMenu();
      break;

    case 6:
      break;

    default:
      system("clear");
      cout << "\n==========Invalid choice.=============\n";
      cin.clear();
      cin.ignore();
      stackMenu();
      break;
    }
  }

  /**
   * @brief Adds a new node with given data to the top of the stack.
   * @param n The data to be added to the stack.
   */
  void addNode(int n) {
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = stack;
    stack = new_node;

    cout << "\nElement " << n << " added to the stack\n\n";
  }

  /**
   * @brief Removes the top node from the stack and returns its data.
   * @param stack Reference to the top of the stack.
   * @param n Reference to store the data of the removed node.
   */
  void remove(Node *&stack, int &n) {
    Node *aux = stack;
    n = aux->data;
    stack = aux->next;
    delete aux;
  }
};