#include <iostream>

using namespace std;

// Function to sort the array in ascending order using Bubble Sort
void bubbleSortAscending(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to sort the array in descending order using Bubble Sort
void bubbleSortDescending(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to sort the array in ascending order using Selection Sort
void selectionSortAscending(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Changed variable name from min_idx to minIndex
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

int main() {
    // Welcoming statement
    cout << "Welcome to Angelo's Sorting Project!" << endl << endl;

    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Sort and display the array in ascending order using Bubble Sort
    bubbleSortAscending(array, n);
    cout << "Bubble Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Sort and display the array in descending order using Bubble Sort
    bubbleSortDescending(array, n);
    cout << "Bubble Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Sort and display the array in ascending order using Selection Sort
    selectionSortAscending(array, n);
    cout << "Selection Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
