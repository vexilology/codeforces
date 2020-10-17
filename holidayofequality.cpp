#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, sum=0;
  std::cin >> n;
  std::vector<int> a(n);

  for (int i=0; i<n; ++i) {
    std::cin >> a[i];
  }

  sort(a.begin(), a.end());

  for (int i=0; i<a.size()-1; ++i)
    sum += a[a.size()-1]-a[i];

  std::cout << sum << std::endl;
  return 0;
}
