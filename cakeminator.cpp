#include <iostream>
#include <set>

int main() {
  int n, w;
  std::cin >> n >> w;
  std::set<int> s1, s2;
  char a;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<w; ++j) {
      std::cin >> a;
      if (a == 'S') {
        s1.insert(i);
        s2.insert(j);
      }
    }
  }

  std::cout << n*w-(s1.size()*s2.size()) << std::endl;
  return 0;
}
