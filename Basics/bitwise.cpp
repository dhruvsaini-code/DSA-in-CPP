#include <iostream>
using namespace std;
int main() {
  /*int a = 3;
  int b = 4;
  cout << "a&b = " << (a & b) << endl;
  cout << "a|b = " << (a | b) << endl;
  cout << "~a = " << (~a) << endl;
  cout << "a^b = " << (a ^ b) << endl;

  int i = 7;
  cout << (++i) << endl;
  cout << (i++) << endl;
  cout << (i--) << endl;
  cout << (--i) << endl;*/

  /*int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;*/
  /*for (int i = 1; i <= n; i++) {
    cout << i << endl;
  }*/
  /*int i = 1;
  for (;;) {
    if (i <= n) {
      cout << i << endl;
    } else {
      break;
    }
  }
  i++;*/
  /*for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--) {
    cout << a<<" "<< b <<" "<< c << endl;
  }*/
  /*int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  cout << sum << endl;*/

  // FIBONACCI SERIES
  /*int n = 5;
  int a = 0;
  int b = 1;
  int sum = 0;
  cout << a << " " << b << "" << endl;
  for (int i = 0; i <= n; i++) {
    sum = a + b;
    cout << sum << endl;
    a = b;
    b = sum;
  }*/
  // PRIME NO

  int n;
  cout << "Enter value : " << endl;
  cin >> n;
  bool isprime = 1;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      isprime = 0;
      break;
    }
  }
  if (isprime == 0) {
    cout << "Number Is Prime" << endl;
  } else {
    cout << "nOt Prime" << endl;
  }
}