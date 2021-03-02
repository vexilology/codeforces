#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> p(n);
  std::vector<int> a(10, 0);

  for (int &i:p)
    std::cin >> i;

  for (int i=0; i<k; ++i) {
    int b;
    std::cin >> b;
    a[b] = 1;
  }

  for (int i:p)
    if (a[i])
      std::cout << i << " ";

  std::cout << std::endl;
  return 0;
}
