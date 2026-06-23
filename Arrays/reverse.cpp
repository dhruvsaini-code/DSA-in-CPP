#include <iostream>
using namespace std;
void reverse(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
void printarray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int crr[5] = {1, 2, 3, 4, 5};
  int brr[6] = {1, 3, 4, 66, 6};
  reverse(crr, 5);
  reverse(brr, 6);
  printarray(crr, 5);
  printarray(brr, 6);
}