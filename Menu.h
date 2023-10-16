#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Sorter.h"
#include <unistd.h>
#include "LinearData.h"

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
                system("cls");
                cout << "\nStarting Searching Algorithms menu..." << endl;
                sleep(1);
                searchingAlgorithms();
                break;
            case 2:
                system("cls");
                cout << "\nStarting Sorting Algorithms menu..." << endl << endl;
                sleep(1);
                sortingAlgorithms();
                break;
            case 3:
                system("cls");
                cout << "\nStarting Linear Data Structures menu..." << endl;
                sleep(1);
                linearData();
                break;
            case 4:
                system("cls");
                cout << "\nStarting Non-Linear Data Structures menu..." << endl;
                sleep(1);
                noLinearData();
                break;
            case 5:
                system("cls");
                cout << "Quitting the program. Goodbye!\n";
                sleep(1);
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    /**
     * @brief Handles searching algorithms menu and user choices.
     */
    void searchingAlgorithms(){}

    /**
     * @brief Handles sorting algorithms menu and user choices.
     */
    void sortingAlgorithms(){
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
                system("cls");
                cout << "\nStarting Bubble Sort..." << endl;
                sleep(1);
                sorter.bubbleSort(data, n);
                cout << "Swaps done: " << sorter.getSwaps() << endl;
                cout << "Comparisons done: " << sorter.getComparisons() << endl;
                break;
            case 2:
                system("cls");
                cout << "\nStarting Selection Sort..." << endl;
                sleep(1);
                sorter.selectionSort(data,n);
                cout << "Swaps done: " << sorter.getSwaps() << endl;
                cout << "Comparisons done: " << sorter.getComparisons() << endl;
                break;
            case 3:
                system("cls");
                cout << "\nStarting Insertion Sort..." << endl;
                sleep(1);
                sorter.insertionSort(data,n);
                cout << "Swaps done: " << sorter.getSwaps() << endl;
                cout << "Comparisons done: " << sorter.getComparisons() << endl;
                break;
            case 4:
                system("cls");
                cout << "\nStarting Merge Sort..." << endl;
                sleep(1);
                sorter.mergeSort(data,0,n - 1);
                cout << "Swaps done: " << sorter.getSwaps() << endl;
                cout << "Comparisons done: " << sorter.getComparisons() << endl;
                break;
            case 5:
                system("cls");
                cout << "\nStarting Shell Sort..." << endl;
                sleep(1);
                sorter.shellSort(data, n);
                cout << "Swaps done: " << sorter.getSwaps() << endl;
                cout << "Comparisons done: " << sorter.getComparisons() << endl;
                break;
            case 6:
                break;
            default:
                system("cls");
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
    void linearData(){

        cout << "Which Linear Data Structure would you like to try?\n";
        cout << "1. Stacks" << endl;
        cout << "2. Queues" << endl;
        cout << "3. Linked List" << endl;
        cout << "4. Doubly Linked List" << endl;
        cout << "5. To be added..." << endl;
        cout << "6. Return to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> secondChoice;

        Stack stacks;
        
        switch (secondChoice) {
            case 1:
                system("cls");
                cout << "\nStarting Stacks..." << endl;
                sleep(1);
                stacks.stackMenu();
                sleep(3);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                system("cls");
                cout << "\nInvalid choice.\n";
                cin.clear();
                cin.ignore();
                sortingAlgorithms();
        }
        
    }

    /**
     * @brief Handles non-linear data structures menu and user choices.
     */
    void noLinearData(){}


};

#endif
