#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter nuumber " << endl;
  cin >> n;
  int ans = 0;
  while (n != 0) {
    int digit = n % 10;
    // for int min and int max
    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
      return 0;
    }
    ans = (ans * 10) + digit;
    n = n / 10;
  }
  cout << ans;
}