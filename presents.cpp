#include <iostream>
#include <vector>

int main() {
  int n, w;
  std::cin >> n;
  std::vector<int> a(n);

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    a[--w] = i + 1;
  }

  for (auto i: a)
    std::cout << i << " ";

  return 0;
}
