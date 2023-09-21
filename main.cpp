#include <iostream>
#include <vector>
#include "Sorter.h"

using namespace std;

/**
 * @brief Main function.
 * @return int
 */
int main() {
    // Initialize data
    vector<int> data = {12, 4, 5, 6, 7, 3, 1, 15, 8, 10};
    Sorter sort;
    int n = data.size();

    // Display original data
    cout << "Original data: ";
    sort.mostrarVector(data);

    // Perform bubble sort
    cout << "\n\nStarting the bubble sort algorithm..." << endl;
    sort.bubbleSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    sort.mostrarVector(data);

    // Reset data
    data = {12, 4, 5, 6, 7, 3, 1, 15, 8, 10};

    // Perform selection sort
    cout << "\nStarting the selection sort algorithm..." << endl;
    sort.selectionSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    sort.mostrarVector(data);

    // Reset data
    data = {12, 4, 5, 6, 7, 3, 1, 15, 8, 10};

    // Perform insertion sort
    cout << "\nStarting the insertion sort algorithm..." << endl;
    sort.insertionSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    sort.mostrarVector(data);

    return 0;
}
