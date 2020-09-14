#include <iostream>

int main() {
  std::string q, w, e;
  std::cin >> q >> w;

  for (int i=0; i<q.size(); ++i) {
    if (q[i] != w[i])
      e += '1';
    else
      e += '0';
  }

  std::cout << e << std::endl;
  return 0;
}
