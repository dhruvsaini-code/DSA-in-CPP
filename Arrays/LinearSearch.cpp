#include <iostream>
using namespace std;
bool search(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6};
  int key;
  cout << "Enter the key to search" << endl;
  cin >> key;
  bool found = search(arr, 10, key);
  if (found) {
    cout << "Key is present" << endl;
  } else {
    cout << "Key Not Present" << endl;
  }
}
