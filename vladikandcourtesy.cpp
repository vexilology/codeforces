#include <iostream>
#include <cmath>

long a, b;

int main() {
  std::cin >> a >> b;
  a = sqrt(a);

  if (a * (a+1) > b)
    std::cout << "Valera" << std::endl;
  else
    std::cout << "Vladik" << std::endl;

  return 0;
}
