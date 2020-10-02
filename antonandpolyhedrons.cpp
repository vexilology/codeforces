#include <iostream>

int main() {
  int n, sum = 0;
  std::string w;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    if (w[0] == 'T')
      sum += 4;
    else if (w[0] == 'C')
      sum += 6;
    else if (w[0] == 'O')
      sum += 8;
    else if (w[0] == 'D')
      sum += 12;
    else
      sum += 20;
  }

  std::cout << sum << std::endl;
  return 0;
}
