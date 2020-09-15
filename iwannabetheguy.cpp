#include <iostream>
#include <vector>

int main() {
  int n, p, t, w;
  std::cin >> n >> p;
  std::vector<int> a(n);

  for (int i=0; i<p; ++i) {
    std::cin >> w;
    a[w-1] = 1;
  }

  std::cin >> t;
  for (int i=0; i<t; ++i) {
    std::cin >> w;
    a[w-1] = 1;
  }

  for (int i=0; i<a.size(); ++i) {
    if (a[i] == 0) {
      std::cout << "Oh, my keyboard!" << std::endl;
      return 0;
    }
  }

  std::cout << "I become the guy." << std::endl;
  return 0;
}
