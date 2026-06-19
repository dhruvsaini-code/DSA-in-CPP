#include <iostream>
using namespace std;
// power fxn
/*int power(int a, int b) {
  int ans = 1;

  for (int i = 1; i <= b; i++) {
    ans = ans * a;
  }

  return ans;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << power(a, b);

  return 0;
}*/

// factorial fxn

/*int factorial(int n) {
  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}
int ncr(int n, int r) {
  int num = factorial(n);
  int denom = factorial(n - r) * factorial(r);
  int ans = num / denom;
  return ans;
}

int main() {
  int a;
  cin >> a;
  int b;
  cin >> b;

  cout << factorial(a) << endl;
  cout << ncr(a, b);
}*/

// ap
// 3n+7

/*int AP(int n) {
  int ap = 3 * n + 7;
  return ap;
}

int main() {
  int n;
  cin >> n;
  int ans = AP(n);
  cout << "Answer is=" << ans << endl;

  return 0;
}*/

// Pass by Value
void fxn(int n) {
  n = n + 10;
  cout << "Inside Function " << n << endl;
}
int main() {
  int a;
  cin >> a;
  fxn(a);
  cout << "Inside Main" << a << endl;
}
