#include <iostream>

int main() {
  long long n, k, c=0;
  char a;
  long long num;
  std::cin >> n >> k;

  while (n--) {
    std::cin >> a >> num;
    if (a == '-') {
      if (num <= k)
        k -= num;
      else
        c++;
    }
    else
      k += num;
  }

  std::cout << k << " " << c << std::endl;
  return 0;
}
