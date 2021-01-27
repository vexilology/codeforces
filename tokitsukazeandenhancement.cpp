#include <iostream>

int main() {
  std::string w[] = {"1 A","0 A","1 B","2 A"};
  int x;
  std::cin >> x;

  std::cout << w[x%4] << std::endl;
  return 0;
}
