// FIRST AND LAST POSITION OF AN ELEMENT IN AN ARRAY

#include <iostream>
using namespace std;
int firstoccurence(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int lastoccurence(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  int even[5] = {3, 3, 4, 5, 7};
  cout << "First Occurence is: " << firstoccurence(even, 5, 3) << endl;
  cout << "Last Occurence is: " << lastoccurence(even, 5, 3) << endl;
}
