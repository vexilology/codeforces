#include <iostream>
#include <set>

int main() {
  int n, m, q, x, i;
  std::set<int> w;
  std::cin >> n >> m;

  while (n--) {
    std::cin >> q;
    while (q--) {
      std::cin >> x;
      w.insert(x);
    }
  }

  if (w.size() == m)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
