#include <iostream>
using namespace std;

// Optimized Bubble Sort
void bubblesort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    bool swapped = false; // Flag to optimize if array is already sorted
    
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    
    // If no two elements were swapped by inner loop, then array is sorted
    if (!swapped) {
      break;
    }
  }
}

int main() {
  int vrr[5] = {6, 2, 8, 4, 10};
  
  cout << "Original array: ";
  for (int i = 0; i < 5; i++) {
    cout << vrr[i] << " ";
  }
  cout << endl;

  bubblesort(vrr, 5);

  cout << "Sorted array: ";
  for (int i = 0; i < 5; i++) {
    cout << vrr[i] << " ";
  }
  cout << endl;

  return 0;
}
