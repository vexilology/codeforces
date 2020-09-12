#include <iostream>

int main() {
  std::string s, w;
  int n, k = 0;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    s += w;
  }

  int pos = s.find("11");
  while (pos + 1) {
    ++k;
    pos = s.find("11", pos + 1);
  }

  pos = s.find("00");
  while (pos + 1) {
    ++k;
    pos = s.find("00", pos + 1);
  }

  std::cout << k + 1 << std::endl;
  return 0;
}
