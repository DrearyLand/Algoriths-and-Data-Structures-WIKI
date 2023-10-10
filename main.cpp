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
    vector<int> data(1000);
    for (int i = 0; i < data.size(); i++) {
        data[i] = rand() % 1000;
    }
    vector<int> aux = data;

    Sorter sort;
    int n = data.size();

    // Display original data
    cout << "Original data: ";
    //sort.mostrarVector(data);

    // Perform bubble sort
    cout << "\n\nStarting the bubble sort algorithm..." << endl;
    sort.bubbleSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    //sort.mostrarVector(data);

    // Reset data
    data = aux;

    // Perform selection sort
    cout << "\nStarting the selection sort algorithm..." << endl;
    sort.selectionSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    //sort.mostrarVector(data);

    // Reset data
    data = aux;

    // Perform insertion sort
    cout << "\nStarting the insertion sort algorithm..." << endl;
    sort.insertionSort(data,n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    //sort.mostrarVector(data);

    // Reset data
    data = aux;

    // Perform insertion sort
    cout << "\nStarting the merge sort algorithm..." << endl;
    sort.mergeSort(data,0,n - 1);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    //sort.mostrarVector(data);

    // Reset data
    data = aux;

    // Perform Shell sort
    cout << "\nStarting the Shell sort algorithm..." << endl;
    sort.shellSort(data, n);
    cout << "Swaps done: " << sort.getSwaps() << endl;
    cout << "Comparisons done: " << sort.getComparisons() << endl;
    // sort.mostrarVector(data);

    data.clear();
    return 0;
}
