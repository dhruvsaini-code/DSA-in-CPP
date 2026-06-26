#include <iostream>
using namespace std;

// Insertion Sort
void insertionsort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    
    // Shift elements of arr[0..i-1], that are greater than temp,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main() {
  int vrr[7] = {10, 1, 7, 4, 8, 2, 11};
  int n = 7;

  cout << "Original array: ";
  for (int i = 0; i < n; i++) {
    cout << vrr[i] << " ";
  }
  cout << endl;

  insertionsort(vrr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << vrr[i] << " ";
  }
  cout << endl;

  return 0;
}
