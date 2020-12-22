#include <iostream>
#include <set>

int main() {
  int l, r;
  std::cin >> l >> r;

  while (l<=r) {
    std::set<int> s;
    int n=l;
    while (n) {
      if (s.insert(n%10).second==false)
        break;
      n /= 10;
    }
    if (n==0) {
      std::cout << l << std::endl;
      return 0;
    }
    ++l;
  }
  std::cout << -1 << std::endl;
  return 0;
}
