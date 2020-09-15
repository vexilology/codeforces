#include <iostream>
#include <set>

int main() {
  std::set<int> a;
  int w;
  std::cin >> w;
  a.insert(w);
  std::cin >> w;
  a.insert(w);
  std::cin >> w;
  a.insert(w);
  std::cin >> w;
  a.insert(w);

  std::cout << 4 - a.size() << std::endl;
  return 0;
}
