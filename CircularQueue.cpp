// Insertion sort in C++

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(int arr[], int size) {
  for (int step = 1; step < size; step++) {
    int key = arr[step];
    int j = step - 1;

    // For descending order, change key<array[j] to key>array[j].
    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int d[] = {9, 5, 1, 4, 3};
  int size = sizeof(d) / sizeof(d[0]);
  insertionSort(d, size);
  cout << "Sorted array in ascending order:\n";
  printArray(d, size);
}
