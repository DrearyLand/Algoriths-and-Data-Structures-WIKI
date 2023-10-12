#include <iostream>
#include <vector>
#include "Sorter.h"
#include "Menu.h"

using namespace std;

/**
 * @brief Main function.
 * @return int
 */
int main() {
    int choice;

    Menu menu;

    menu.displayMenu();

    while (true) {
        cin >> choice;
        if (choice == 5) {
            break;
        }

        if (choice >= 1 && choice <= 4) {
            menu.runOption(choice);
            cout << "\n\nReturning to main menu...\n\n\n";
            sleep(3);
            system("cls");
        } else{
            cout << "\nInvalid choice. Quiting program.\n";
            break;
        }

        menu.displayMenu();
    }

    // // Display original data
    // cout << "Original data: ";
    // sort.mostrarVector(data);

    // // Perform bubble sort
    // cout << "\n\nStarting the bubble sort algorithm..." << endl;
    // sort.bubbleSort(data,n);
    // cout << "Swaps done: " << sort.getSwaps() << endl;
    // cout << "Comparisons done: " << sort.getComparisons() << endl;
    // //sort.mostrarVector(data);

    // // Reset data
    // data = aux;

    // // Perform selection sort
    // cout << "\nStarting the selection sort algorithm..." << endl;
    // sort.selectionSort(data,n);
    // cout << "Swaps done: " << sort.getSwaps() << endl;
    // cout << "Comparisons done: " << sort.getComparisons() << endl;
    // //sort.mostrarVector(data);

    // // Reset data
    // data = aux;

    // // Perform insertion sort
    // cout << "\nStarting the insertion sort algorithm..." << endl;
    // sort.insertionSort(data,n);
    // cout << "Swaps done: " << sort.getSwaps() << endl;
    // cout << "Comparisons done: " << sort.getComparisons() << endl;
    // //sort.mostrarVector(data);

    // // Reset data
    // data = aux;

    // // Perform insertion sort
    // cout << "\nStarting the merge sort algorithm..." << endl;
    // sort.mergeSort(data,0,n - 1);
    // cout << "Swaps done: " << sort.getSwaps() << endl;
    // cout << "Comparisons done: " << sort.getComparisons() << endl;
    // //sort.mostrarVector(data);

    // // Reset data
    // data = aux;

    // // Perform Shell sort
    // cout << "\nStarting the Shell sort algorithm..." << endl;
    // sort.shellSort(data, n);
    // cout << "Swaps done: " << sort.getSwaps() << endl;
    // cout << "Comparisons done: " << sort.getComparisons() << endl;
    // sort.displayBars(data);
    // // sort.mostrarVector(data);

    return 0;
}
