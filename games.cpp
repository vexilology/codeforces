#include <iostream>
#include <vector>

int main() {
  int n, w, k=0;
  std::cin >> n;
  std::vector<int> a;
  std::vector<int> b;

  for (int i=0; i<n; ++i) {
    std::cin >> w; a.push_back(w);
    std::cin >> w; b.push_back(w);
  }

  for (int i=0; i<a.size(); ++i) {
    for (int f=0; f<b.size(); ++f) {
      if (a[i] == b[f])
        ++k;
    }
  }

  std::cout << k << std::endl;
  return 0;
}
