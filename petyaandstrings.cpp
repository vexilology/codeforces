#include <iostream>

int main() {
  std::string q, w;
  std::cin >> q >> w;

  for (int i=0; i<q.size(); ++i) {
    if (q[i] < 97)
      q[i] += 32;

    if (w[i] < 97)
      w[i] += 32;
  }

  if (q > w)
    std::cout << 1 << std::endl;
  else if (q < w)
    std::cout << -1 << std::endl;
  else
    std::cout << 0 << std::endl;

  return 0;
}
