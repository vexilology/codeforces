#include <iostream>
#include <vector>
#include <cmath>

int main() {
  int tt, qq, ww;
  std::vector<int> t;
  std::vector<std::vector<int>> a;

  for (int i=0; i<5; ++i) {
    t.clear();

    for (int j=0; j<5; ++j) {
      std::cin >> tt;
      if (tt) {
        qq = i;
        ww = j;
      }

      t.push_back(tt);
    }

    a.push_back(t);
  }

  std::cout << std::abs(qq - 2) + std::abs(ww - 2) << std::endl;
  return 0;
}
