#ifndef MENU_H
#define MENU_H

#include "Sorter.h"
#include "DataStructures/Stack.h"
#include "DataStructures/Queue.h"
#include "DataStructures/L_List.h"
#include "DataStructures/BST.h"
#include <iostream>
#include <unistd.h>

using namespace std;

/**
 * @brief Displays the main menu options.
 */
class Menu {
private:
  int secondChoice;

public:
  /**
   * @brief Display the main menu options.
   */
  void displayMenu() {
    cout << "======= Welcome to Algorithm Visions =======\n\n";
    cout << "Understand different algorithms and data\n";
    cout << "structures through this program visualizing\n";
    cout << "each step. Choose a topic to explore.\n\n";
    cout << "1. Searching Algorithms\n";
    cout << "2. Sorting Algorithms\n";
    cout << "3. Data Structures\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
  }

  /** 
   * @brief Run the selected menu.
   * @param choice The user's choice.
   */
  void runOption(int choice) {
    switch (choice) {
    case 1:
      system("clear");
      searchingAlgorithms();
      break;
    case 2:
      system("clear");
      sortingAlgorithms();
      break;
    case 3:
      system("clear");
      dataStructures();
      break;
      
    default:
      cout << "Invalid choice. Please try again.\n";
    }
  }

  /**
   * @brief Handles searching algorithms menu and user choices.
   */
  void searchingAlgorithms() {}

  /**
   * @brief Handles sorting algorithms menu and user choices.
   */
  void sortingAlgorithms() {
    // Initialize data
    vector<int> data(10);
    for (int i = 0; i < data.size(); i++) {
      data[i] = rand() % 10;
    }
    vector<int> aux = data;
    Sorter sorter;
    int n = data.size();

    cout << "\nWelcome to the Sorting Algorithms menu\n\n";
    cout << "Which Sorting Algorithm would you like to watch?\n";
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "5. Shell Sort" << endl;
    cout << "6. Return to main menu" << endl;
    cout << "Enter your choice: ";
    cin >> secondChoice;
    switch (secondChoice) {
    case 1:
      system("clear");
      sorter.bubbleSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      cout << "\nPress enter to continue.";      
      cin.ignore();
      cin.get();
      break;
    case 2:
      system("clear");
      sorter.selectionSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      cout << "\nPress enter to continue.";      
      cin.ignore();
      cin.get();  
      break;
    case 3:
      system("clear");
      sorter.insertionSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      cout << "\nPress enter to continue.";      
      cin.ignore();
      cin.get();  
      break;
    case 4:
      system("clear");
      sorter.mergeSort(data, 0, n - 1);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      cout << "\nPress enter to continue.";      
      cin.ignore();
      cin.get();  
      break;
    case 5:
      system("clear");
      sorter.shellSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      cout << "\nPress enter to continue.";      
      cin.ignore();
      cin.get();  
      break;
    case 6:
      break;
    default:
      system("clear");
      cout << "\nInvalid choice.\n";
      cin.clear();
      cin.ignore();
      sortingAlgorithms();
      break;
    }
  }

  /**
   * @brief Handles linear data structures menu and user choices.
   */
  void dataStructures() {
    system("clear");
    cout << "Which Data Structure would you like to try?\n";
    cout << "1. Stacks" << endl;
    cout << "2. Queues" << endl;
    cout << "3. Linked List" << endl;
    cout << "4. Binary Search Tree" << endl;
    cout << "5. To be added..." << endl;
    cout << "6. Return to main menu" << endl;
    cout << "Enter your choice: ";
    cin >> secondChoice;

    Stack stacks;
    Queue queue;
    L_List list;
    BST bst;

    switch (secondChoice) {
    case 1:
      stacks.stackMenu();
      break;
    case 2:
      queue.menuQueue();
      break;
    case 3:
      list.listMenu();
      break;
    case 4:
      bst.BST_Menu();
      break;
    case 5:
      usleep(1000000);
      break;
    case 6: 
      break;
    default:
      system("clear");
      cout << "\nInvalid choice.\n";
      cin.clear();
      cin.ignore();
      dataStructures();
    }
  }

  /**
   * @brief Handles non-linear data structures menu and user choices.
   */
  void noLinearData() {}
};

#endif
