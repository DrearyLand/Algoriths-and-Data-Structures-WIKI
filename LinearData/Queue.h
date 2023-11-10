#include <iostream>
#include "LinearData.h"

using namespace std;

class Queue {
private:
  Node *front = NULL;
  Node *end = NULL;
  Node *current;
  int queueChoice, data, len;
public:

  void menuQueue(){
    system("clear");
    cout << "\nWelcome to Queues\n\n";
    cout << "What fuction you want to try? " << endl;
    cout << "1. Add data manually." << endl;
    cout << "2. Generate random data." << endl;
    cout << "3. View current Queue. " << endl;
    cout << "4. Remove last element." << endl;
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
      usleep(2000000);
      menuQueue();
      break;

    case 2:
      cout << "How many items would you like to add to the stack: ";
      cin >> len;
      while (len > 0) {
        insertQueue(randomNum());
        len--;
      }
      usleep(2000000);
      menuQueue();
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
      usleep(2000000);
      menuQueue();
      break;

    case 4:
      if (front != NULL) {
        deleteQueue(data);
        cout << "Removed element: " << data << endl;
      } else {
        cout << "The Queue is empty." << endl;
      }
      usleep(2000000);
      menuQueue();
      break;

    case 5:
      cout << "Removing the elements of the stack: " << endl;
      while (front != NULL) {
        deleteQueue(data);
        if (front != NULL) {
          cout << data << " , ";
        } else {
          cout << data << ".";
        }
      }
      cout << endl;
      usleep(2000000);
      menuQueue();
      break;

    case 6:
      break;

    default:
      system("clear");
      cout << "\n==========Invalid choice.=============\n";
      cin.clear();
      cin.ignore();
      menuQueue();
      break;
    }
  }

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

  void deleteQueue(int &n){
    n = front->data;
    if (front == end){
      front = NULL;
      end = NULL;
    } else {
      front = front->next;
    }
  }

  bool empty_queue(Node *front){
    return (front == NULL) ? true : false;
  }

};