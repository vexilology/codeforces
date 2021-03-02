#include <iostream>

int main() {
  long long a, b, x, y, z;
  std::cin >> a >> b >> x >> y >> z;

  std::cout << std::max((long long)0, std::max(2*x+y-a+3*z+y-b, std::max(3*z+y-b, 2*x+y-a))) << std::endl;
  return 0;
}
