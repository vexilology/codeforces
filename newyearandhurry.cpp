#include <iostream>

int main() {
  int n, res=0, w, sum=240;
  std::cin >> n >> w;
  sum -= w;

  while (sum >= (res+1)*5 && res<n) {
    ++res;
    sum -= res*5;
  }

  std::cout << res << std::endl;
  return 0;
}
