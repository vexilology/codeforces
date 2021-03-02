#include <iostream>

int main() {
  int n;
  std::cin >> n;

  if (n%2 == 1) {
    std::cout << n/2 << " " << n/2+1;
  } else {
    if ((n/2-1)%2 == 1)
      std::cout << n/2-1 << " " << n/2+1;
    else
      std::cout << n/2-2 << " " << n/2+2;
  }

  std::cout << std::endl;
  return 0;
}
