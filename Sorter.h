#ifndef SORTER_H
#define SORTER_H

#include <iostream>
#include <vector>

using namespace std;

/**
 * @class Sorter
 * @brief A class that provides different sorting algorithms.
 */
class Sorter {
private:
    int comparisons; ///< Number of comparisons made during sorting.
    int swaps; ///< Number of swaps made during sorting.

public:
    /**
     * @brief Function to display a vector.
     * @param arr The vector to be displayed.
     */
    void mostrarVector(const vector<int>& arr) {
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    /**
     * @brief Bubble sort algorithm.
     * @param arr The vector to be sorted.
     * @param n The size of the vector.
     */
    void bubbleSort(std::vector<int>& arr, int n) {
        comparisons = 0;
        swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                comparisons++;
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swaps++;
                }
            }
        }
    }

    /**
     * @brief Selection sort algorithm.
     * @param arr The vector to be sorted.
     * @param n The size of the vector.
     */
    void selectionSort(std::vector<int>& arr, int n) {
        comparisons = 0;
        swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                comparisons++;
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }

            if (minIdx != i) {
                int temp = arr[i];
                arr[i] = arr[minIdx];
                arr[minIdx] = temp;
                swaps++;
            }
        }
    }

    /**
     * @brief Insertion sort algorithm.
     * @param arr The vector to be sorted.
     * @param n The size of the vector.
     */
    void insertionSort(std::vector<int>& arr, int n) {
        comparisons = 0;
        swaps = 0;
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                comparisons++;
                arr[j + 1] = arr[j];
                j--;
                swaps++;
            }
            arr[j + 1] = key;
        }
    }

    /**
     * @brief Get the number of comparisons made during sorting.
     * @return The number of comparisons.
     */
    int getComparisons() const {
        return comparisons;
    }

    /**
     * @brief Get the number of swaps made during sorting.
     * @return The number of swaps.
     */
    int getSwaps() const {
        return swaps;
    }
};

#endif
