#include <iostream>

int main() {
  int a;
  std::cin >> a;

  while ((a/1000%10+a/100%10+a/10%10+a%10)%4) {
    a++;
  }

  std::cout << a << std::endl;
  return 0;
}
