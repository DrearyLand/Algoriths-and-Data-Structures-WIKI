#ifndef MENU_H
#define MENU_H

#include "LinearData.h"
#include "Sorter.h"
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
    cout << "3. Linear Data Structures\n";
    cout << "4. Non-Linear Data Structures\n";
    cout << "5. Quit\n";
    cout << "Enter your choice: ";
  }

  /**
   * @brief Run the selected sorting algorithm.
   * @param choice The user's choice.
   */
  void runOption(int choice) {
    switch (choice) {
    case 1:
      system("clear");
      cout << "\nWelcome to the Searching Algorithms menu" << endl;
      searchingAlgorithms();
      break;
    case 2:
      system("clear");
      cout << "\nWelcome to the Sorting Algorithms menu" << endl << endl;
      sortingAlgorithms();
      break;
    case 3:
      system("clear");
      cout << "\nWelcome to the Data Structures menu" << endl;
      linearData();
      break;
    case 4:
      system("clear");
      cout << "\nWelcome to the Non-Linear Data Structures menu" << endl;
      noLinearData();
      break;
    case 5:
      system("clear");
      cout << "Quitting the program. Goodbye!\n";
      usleep(1000000);
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
      cout << "\nStarting Bubble Sort..." << endl;
      usleep(1000000);
      sorter.bubbleSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      break;
    case 2:
      system("clear");
      cout << "\nStarting Selection Sort..." << endl;
      usleep(1000000);
      sorter.selectionSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      break;
    case 3:
      system("clear");
      cout << "\nStarting Insertion Sort..." << endl;
      usleep(1000000);
      sorter.insertionSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      break;
    case 4:
      system("clear");
      cout << "\nStarting Merge Sort..." << endl;
      usleep(1000000);
      sorter.mergeSort(data, 0, n - 1);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
      break;
    case 5:
      system("clear");
      cout << "\nStarting Shell Sort..." << endl;
      usleep(1000000);
      sorter.shellSort(data, n);
      cout << "Swaps done: " << sorter.getSwaps() << endl;
      cout << "Comparisons done: " << sorter.getComparisons() << endl;
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
  void linearData() {
    system("clear");
    cout << "Which Linear Data Structure would you like to try?\n";
    cout << "1. Stacks" << endl;
    cout << "2. Queues(in progress...)" << endl;
    cout << "3. Linked List(in progress...)" << endl;
    cout << "4. Doubly Linked List(in progress...)" << endl;
    cout << "5. To be added..." << endl;
    cout << "6. Return to main menu" << endl;
    cout << "Enter your choice: ";
    cin >> secondChoice;

    Stack stacks;
    Queue queue;

    switch (secondChoice) {
    case 1:
      system("clear");
      cout << "\nStarting Stacks..." << endl;
      stacks.stackMenu();
      break;
    case 2:
      cout << "\nIn progress..." << endl;
      queue.menuQueue();
      break;
    case 3:
      cout << "\nIn progress..." << endl;
      usleep(1000000);
      break;
    case 4:
      cout << "\nIn progress..." << endl;
      usleep(1000000);
      break;
    case 5:
      cout << "\nIn progress..." << endl;
      usleep(1000000);
      break;
    case 6:
      break;
    default:
      system("clear");
      cout << "\nInvalid choice.\n";
      cin.clear();
      cin.ignore();
      linearData();
    }
  }

  /**
   * @brief Handles non-linear data structures menu and user choices.
   */
  void noLinearData() {}
};

#endif
