#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string n;
  std::cin >> n;
  std::vector<int> a;

  for (int i=0; i<n.size(); i+=2) {
    a.push_back(n[i] - 48);
  }

  sort(a.begin(), a.end());

  for (int i=0; i<a.size() - 1; ++i) {
    std::cout << a[i] << "+";
  }

  std::cout << a[a.size() - 1] << std::endl;
  return 0;
}
