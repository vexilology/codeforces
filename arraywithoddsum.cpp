#include <iostream>
#include <vector>

int main() {
  int w, n, q;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> n;
    std::vector<int> a;
    int s=0, e=0, c=0;

    for (int j=0; j<n; ++j) {
      std::cin >> q;
      if (q % 2)
        e++;
      else
        c++;
    }

    if (e % 2)
      std::cout << "YES" << std::endl;
    else {
      if (c && e)
        std::cout << "YES" << std::endl;
      else
        std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
