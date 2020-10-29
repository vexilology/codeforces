#include <iostream>

int main() {
  int n, i=1, k=1;
  std::cin >> n;

  while (n>=i) {
    n -= i;
    k++;
    i += k;
  }

  std::cout << --k << std::endl;
  return 0;
}
