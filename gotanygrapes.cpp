#include <iostream>

int main() {
  int a, b, c, x, y, z;
  std::cin >> x >> y >> z;
  std::cin >> a >> b >> c;

  if (a>=x && a+b-x>=y && a+b+c-x-y>=z)
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;

  return 0;
}
