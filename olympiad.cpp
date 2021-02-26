#include <iostream>
#include <set>

int main() {
  int n, w;
  std::cin >> n;
  std::set<int> s;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    if (w)
      s.insert(w);
  }

  std::cout << s.size() << std::endl;
  return 0;
}
