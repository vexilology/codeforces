#include <iostream>

using int64 = long long;

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int64 n, ans{};
    std::cin >> n;
    while (n%2 == 0) {
      n /= 2;
      ans += 1;
    }
    while (n%3 == 0) {
      n /= 3;
      ans += 2;
    }
    while (n%5 == 0) {
      n /= 5;
      ans += 3;
    }
    std::cout << ((n==1) ? ans : -1) << std::endl;
  }

  return 0;
}
