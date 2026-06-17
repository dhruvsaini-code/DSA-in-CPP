#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  /*int ans=0;
  int digit;
  //lcm
  while((digit/2!=0)||(digit/2!=1)){
      int ans=n%2;
      ans=
  }*/
  if (n == 0) {
    cout << 1 << endl;
    return 0;
  }
  int temp = n;
  int mask = 0;
  while (temp != 0) {
    mask = (mask << 1) | 1;
    temp = temp >> 1;
  }
  int ans = (~n) & mask;
  cout << ans << endl;
  return 0;
}