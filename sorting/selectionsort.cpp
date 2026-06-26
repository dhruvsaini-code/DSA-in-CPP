#include <iostream>
using namespace std;

void selectionsort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j; // Fixed: minIndex is only updated if arr[j] is smaller
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

int main() {
  int vrr[5] = {4, 5, 6, 2, 3};
  selectionsort(vrr, 5);
  
  cout << "Sorted array: ";
  for (int i = 0; i < 5; i++) {
    cout << vrr[i] << " ";
  }
  cout << endl;
  
  return 0;
}