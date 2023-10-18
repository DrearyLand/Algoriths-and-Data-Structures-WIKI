#ifndef SORTER_H
#define SORTER_H

#include <iostream>
#include <unistd.h>
#include <vector>

using namespace std;

/**
 * @class Sorter
 * @brief A class that provides different sorting algorithms.
 */
class Sorter {
private:
  int comparisons; ///< Number of comparisons made during sorting.
  int swaps;       ///< Number of swaps made during sorting.

public:
  /**
   * @brief Function to display a vector.
   * @param arr The vector to be displayed.
   */
  void mostrarVector(const vector<int> &arr) {
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
  void bubbleSort(vector<int> &arr, int n) {
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
          displayBars(arr);
        }
      }
    }
  }

  /**
   * @brief Selection sort algorithm.
   * @param arr The vector to be sorted.
   * @param n The size of the vector.
   */
  void selectionSort(vector<int> &arr, int n) {
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
        displayBars(arr);
      }
    }
  }

  /**
   * @brief Insertion sort algorithm.
   * @param arr The vector to be sorted.
   * @param n The size of the vector.
   */
  void insertionSort(vector<int> &arr, int n) {
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
        displayBars(arr);
      }
      arr[j + 1] = key;
    }
  }

  /**
   * @brief Merge sort algorithm.
   * @param arr The vector to be sorted.
   * @param left The left index of the sub-vector.
   * @param right The right index of the sub-vector.
   */
  void mergeSort(vector<int> &arr, int left, int right) {

    comparisons++;

    if (left < right) {
      // Calculate middle index of the vector
      int middle = left + (right - left) / 2;

      // Recursive call on the left sub-vector
      mergeSort(arr, left, middle);

      // Recursive call on the right sub-vector
      mergeSort(arr, middle + 1, right);

      // Merge the sorted sub-vectors
      merge(arr, left, middle, right);
    }

    displayBars(arr);
  }

  /**
   * @brief Merge function for Merge Sort.
   * @param arr The vector to be merged.
   * @param left The left index of the sub-vector.
   * @param middle The middle index of the sub-vector.
   * @param right The right index of the sub-vector.
   */
  void merge(vector<int> &arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary vectors
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Copy data to temporary vectors leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
      leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
      rightArr[j] = arr[middle + 1 + j];
    }

    // Merge the temporary vectors back into arr[left..right]
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
      if (leftArr[i] <= rightArr[j]) {
        arr[k] = leftArr[i];
        i++;
      } else {
        arr[k] = rightArr[j];
        j++;
        swaps++;
      }
      k++;
    }
    // Copy the remaining elements of leftArr[], if there are any
    while (i < n1) {
      arr[k] = leftArr[i];
      i++;
      k++;
    }

    // Copy the remaining elements of rightArr[], if there are any
    while (j < n2) {
      arr[k] = rightArr[j];
      j++;
      k++;
    }
  }

  /**
   * @brief Shell sort algorithm.
   * @param arr The vector to be sorted.
   * @param n The size of the vector.
   */
  void shellSort(vector<int> &arr, int n) {
    comparisons = 0;
    swaps = 0;

    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
      // Do a gapped insertion sort for this gap size.
      // The first gap elements a[0..gap-1] are already in gapped order
      // Keep adding one more element until the entire array is gap sorted
      for (int i = gap; i < n; i++) {
        int temp = arr[i];
        int j;
        comparisons++;
        // Shift earlier gap-sorted elements up until the correct location for
        // arr[i] is found
        for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
          comparisons++;
          arr[j] = arr[j - gap];
          swaps++;
          displayBars(arr);
        }
        // Put arr[i] (the original a[i]) in its correct location
        arr[j] = temp;
      }
    }
  }

  /**
   * @brief Get the number of comparisons made during sorting.
   * @return The number of comparisons.
   */
  int getComparisons() const { return comparisons; }

  /**
   * @brief Get the number of swaps made during sorting.
   * @return The number of swaps.
   */
  int getSwaps() const { return swaps; }

  /**
   * @brief Display elements of the vector as ASCII bars.
   * @param arr The vector to be displayed.
   */
  void displayBars(const vector<int> &arr) {
    system("clear");
    cout << "\n";
    for (int num : arr) {
      for (int i = 0; i < num; ++i) {
        cout << "|"; // ASCII bar representation
      }
      cout << endl;
    }
    cout << endl;
    usleep(300000);
  }
};

#endif
