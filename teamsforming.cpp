#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, sum=0;
  std::cin >> n;
  std::vector<int> a(n);

  for (auto &i:a)
    std::cin >> i;

  std::sort(a.begin(), a.end());

  for (int i=0; i<n; i+=2)
    sum += a[i+1] - a[i];

  std::cout << sum << std::endl;
  return 0;
}
