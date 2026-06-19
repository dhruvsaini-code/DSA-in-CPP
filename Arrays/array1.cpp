#include <iostream>
using namespace std;
void printarray(int arr[], int size) {
  cout << "Printing Array" << endl;
  for (int i = 0; i <= size; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  /*int array[15];
  cout << "Number at 0th index is " << array[0] << endl;*/
  /*int arr[3] = {2, 3, 4};
  cout << "Numer and 2nd index" << arr[2] << endl;*/

  int third[15] = {2, 7};
  int n = 15;
  for (int i = 0; i <= n; i++) {
    cout << third[i] << " ";
  }
  printarray(third, 4);
}