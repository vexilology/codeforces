#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  char w;
  std::vector<int> a(26);

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    if (int(w) < 97)
      a[int(w) - 65] = 1;
    else
      a[int(w) - 97] = 1;
  }

  std::sort(a.begin(), a.end());

  if (a[0] != a[a.size() - 1])
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;

  return 0;
}
