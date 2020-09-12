#include <iostream>

int main() {
  int n, h, temp, sum = 0;
  std::cin >> n >> h;

  for (int i=0; i<n; ++i) {
    std::cin >> temp;
    if (temp > h)
      sum += 2;
    else
      sum++;
  }

  std::cout << sum << std::endl;
  return 0;
}
