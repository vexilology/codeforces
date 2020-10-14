#include <iostream>
#include <vector>

int main() {
  int n, w=0;
  std::cin >> n;
  std::vector<int> a(n);
  std::cin >> a[0];

  for (int i=1; i<a.size(); ++i) {
    std::cin >> a[i];
    bool b = true;
    for (int j=i-1; j>=0; --j)
      if (a[j] >= a[i]) {
        b = false;
        break;
      }

    if (b)
      ++w;

    else {
      b = true;
      for (int j=i-1; j>=0; --j)
        if (a[j] <= a[i]) {
          b = false;
          break;
        }

      if (b)
        ++w;
    }
  }

  std::cout << w << std::endl;
  return 0;
}
