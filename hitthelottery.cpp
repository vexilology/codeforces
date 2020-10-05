#include <iostream>

int main() {
  int n, w=0;
  std::cin >> n;

  w += n/100;
  n %= 100;
  w += n/20;
  n %= 20;
  w += n/10;
  n %= 10;
  w += n/5;
  n %= 5;
  w += n;

  std::cout << w << std::endl;
  return 0;
}
