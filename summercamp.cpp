#include <iostream>
#include <string>

int main() {
  std::string w;

  for (int i=1; i<1000; ++i) {
    w += std::to_string(i);
  }

  int n;
  std::cin >> n;

  std::cout << w[n-1] << std::endl;
  return 0;
}
