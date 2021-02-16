#include <iostream>

int main() {
  int n, d;
  int a{}, b{};
  std::cin >> n >> d;

  for (int i=0; i<d; ++i) {
    std::string w;
    std::cin >> w;
    a = w.find('0') == std::string::npos ? 0 : a+1;
    b = std::max(b, a);
  }

  std::cout << b << std::endl;
  return 0;
}
