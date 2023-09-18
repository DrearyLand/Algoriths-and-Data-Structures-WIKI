#include <iostream>
#include <vector>

using namespace std;

// Function to display a vector
void mostrarVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for the bubble sort algorithm
void ordenamientoBurbuja(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements without using the swap function
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Show the sorting process at each step
                mostrarVector(arr);
            }
        }
    }
}

int main() {
    vector<int> datos = {12, 4, 5, 6, 7, 3, 1, 15, 8, 10};

    cout << "Original data: ";
    mostrarVector(datos);

    cout << "Starting the bubble sort algorithm..." << endl;
    ordenamientoBurbuja(datos);

    cout << "Sorted Data: ";
    mostrarVector(datos);

    return 0;
}
