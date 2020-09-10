#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  bool b = true;

  while (b) {
    ++n;
    int w = n;
    std::vector<int>a(10);

    while (w) {
      a[w % 10]++;
      w /= 10;
    }

    for (int i=0; i<a.size(); ++i) {
      if (a[i] > 1)
        b = false;
    }

    if (!b)
      b = true;
    else
      b = false;
  }

  std::cout << n << std::endl;
  return 0;
}
