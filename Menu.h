#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Sorter.h"
#include <unistd.h>

using namespace std;

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
                cout << "\nStarting Searching Algorithms menu..." << endl;
                searchingAlgorithms();
                break;
            case 2:
                cout << "\nStarting Sorting Algorithms menu..." << endl;
                sortingAlgorithms();
                break;
            case 3:
                cout << "\nStarting Linear Data Structures menu..." << endl;
                linearData();
                break;
            case 4:
                cout << "\nStarting Non-Linear Data Structures menu..." << endl;
                noLinearData();
                break;
            case 5:
                cout << "Quitting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    void searchingAlgorithms(){}
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
        cout << "Enter your choice: ";
        cin >> secondChoice;
        switch (secondChoice) {
            case 1:
                system("cls");
                cout << "\nStarting Bubble Sort..." << endl;
                sleep(3);
                sorter.bubbleSort(data, n);
                break;
            case 2:
                cout << "\nStarting Sorting Algorithms menu..." << endl;
                sortingAlgorithms();
                break;
            case 3:
                cout << "\nStarting Linear Data Structures menu..." << endl;
                linearData();
                break;
            case 4:
                cout << "\nStarting Non-Linear Data Structures menu..." << endl;
                noLinearData();
                break;
            case 5:
                cout << "Quitting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                sortingAlgorithms();
        }
    }
    void linearData(){}
    void noLinearData(){}


};

#endif
