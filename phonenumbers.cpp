#include <iostream>

std::string s;

int n, w{};

int main() {
  std::cin >> n >> s;

  for (auto c: s) w += c == '8';

  std::cout << std::min(n/11, w) << std::endl;
  return 0;
}
