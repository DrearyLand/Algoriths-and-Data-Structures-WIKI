#include <iostream>
#include "LinearData.h"

using namespace std;

/**
 * @class Queue
 * @brief A class representing a queue data structure.
 */
class Queue {
private:
  Node *front = NULL; ///< Pointer to the front of the queue.
  Node *end = NULL;   ///< Pointer to the end of the queue.
  Node *current;      ///< Pointer to traverse the queue.
  int queueChoice, data, len; ///< Variables for user input and data manipulation.

public:
  void loadIntoVector(vector<int>& vec) const {
    vec.clear();
    Node* actual = front;
    while (actual) {
      vec.push_back(actual->data);
      actual = actual->next;
    }
    modifyFile(vec);
  }

  /**
   * @brief Displays the menu for queue operations and handles user input.
   */
  void menuQueue(vector<int> &dataVec){
    system("clear");
    cout << "\nWelcome to Queues\n\n";
    cout << "What fuction you want to try? " << endl;
    cout << "1. Add data manually." << endl;
    cout << "2. Generate random data." << endl;
    cout << "3. View current Queue. " << endl;
    cout << "4. Remove first element." << endl;
    cout << "5. Remove all data." << endl;
    cout << "6. Return back" << endl;
    cout << "Select an option: ";

    cin >> queueChoice;
    system("clear");

    switch (queueChoice) {
    case 1:
      cout << "How many items would you like to add to the stack: ";
      cin >> len;
      while (len > 0) {
        cout << "Type the number that you want to add: ";
        cin >> data;
        insertQueue(data);
        len--;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      loadIntoVector(dataVec);
      menuQueue(dataVec);
      break;

    case 2:
      cout << "How many items would you like to add to the stack: ";
      cin >> len;
      while (len > 0) {
        insertQueue(randomNum());
        len--;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      loadIntoVector(dataVec);
      menuQueue(dataVec);
      break;

    case 3:
      cout << "Current Queue: \n";
      cout << "Front -> ";
      current = front;
      while(current != NULL){
        cout << "[" << current->data << "]";
        current = current->next;
        if(current != NULL){
            cout << " -> ";
        }
      } if(front == NULL){
        cout << "[NULL]";
      }
      cout << " <- End" << endl;
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      menuQueue(dataVec);
      break;

    case 4:
      if (front != NULL) {
        deleteQueue(data);
        cout << "Removed element: " << data << endl;
      } else {
        cout << "The Queue is empty." << endl;
      }
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      loadIntoVector(dataVec);
      menuQueue(dataVec);
      break;

    case 5:
      cout << "Removing the elements of the queue: " << endl;
      while (front != NULL) {
        deleteQueue(data);
        if (front != NULL) {
          cout << data << " , ";
        } else {
          cout << data << ".";
        }
      }
      cout << endl;
      cout << "\nPress enter to continue.";
      cin.ignore();
      cin.get();
      loadIntoVector(dataVec);
      menuQueue(dataVec);
      break;

    case 6:
      break;

    default:
      system("clear");
      cout << "\n==========Invalid choice.=============\n";
      cin.clear();
      cin.ignore();
      menuQueue(dataVec);
      break;
    }
  }

  /**
   * @brief Inserts an element into the queue.
   * @param n The element to be inserted.
   */
  void insertQueue(int n){
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = NULL;

    if(empty_queue(front)){
      front = new_node;
    } else{
      end->next = new_node;
    }

    end = new_node;

    cout << "\nElement " << n << " added to the queue\n\n";
  }

  /**
   * @brief Removes an element from the front of the queue.
   * @param n Reference to store the removed element.
   */
  void deleteQueue(int &n){
    n = front->data;
    if (front == end){
      front = NULL;
      end = NULL;
    } else {
      front = front->next;
    }
  }

  /**
   * @brief Checks if the queue is empty.
   * @param front Pointer to the front of the queue.
   * @return True if the queue is empty, false otherwise.
   */
  bool empty_queue(Node *front){
    return (front == NULL) ? true : false;
  }

};