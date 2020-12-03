#include <iostream>

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }
  return gcd(b%a, a);
}

int main() {
  int a, b, n, t=1;
  std::cin >> a >> b >> n;

  while (n > 0) {
    t = (t + 1) % 2;
    if (t == 0) {
      n -= gcd(n, a);
    } else {
      n -= gcd(n, b);
    }
  }

  std::cout << t << std::endl;
  return 0;
}
