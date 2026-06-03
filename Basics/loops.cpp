#include <iostream>
using namespace std;
int main() {
  /*int n;
  cin >> n;
  cout << "N is : " << n << endl;
  if (n > 0) {
    cout << "N is positive  " << endl;
  } else {
    cout << "N is negative" << endl;
  }*/
  /*int a;
  cout << "Enter the Value of A : " << endl;
  cin >> a;

  if (a > 0) {
    cout << "A is Positive : " << endl;
  } else if (a < 0) {
    cout << "A is Negative : " << endl;
  }*/
  char ch;
  cout << "Enter Character : " << endl;
  cin >> ch;
  if (ch >= 'a' && ch <= 'z') {
    cout << "This is lowercase" << endl;
  } else if (ch >= 'A' && ch <= 'Z') {
    cout << "This is Uppercase" << endl;
  } else if (ch >= '0' && ch <= '9') {
    cout << "This is a number" << endl;
  } else {
    cout << "This is a special character" << endl;
  }
}