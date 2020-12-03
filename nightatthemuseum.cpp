#include <iostream>

int main() {
  std::string w;
  std::cin >> w;
  int r = 0;
  char p = 'a';

  for (int i=0; i<w.size(); ++i) {
    int c = abs(w[i] - p);
    int a = 26 - c;
    r += std::min(a, c);
    p = w[i];
  }

  std::cout << r << std::endl;
  return 0;
}
