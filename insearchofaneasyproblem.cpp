#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, w;
  std::cin >> n;
  std::vector<int> q;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    q.push_back(w);
  }

  std::sort(q.begin(), q.end());

  if (q[q.size() - 1] == 1)
    std::cout << "HARD" << std::endl;
  else
    std::cout << "EASY" << std::endl;

  return 0;
}
