#include <iostream>
#include <vector>

int main() {
  int k, l, m, n, d, q = 0;
  std::cin >> k >> l >> m >> n >> d;
  std::vector<int> a(d);

  for (int i=k-1; i<a.size(); i+=k) {
    a[i] = 1;
  }

  for (int i=l-1; i<a.size(); i+=l) {
    a[i] = 1;
  }

  for (int i=m-1; i<a.size(); i+=m) {
    a[i] = 1;
  }

  for (int i=n-1; i<a.size(); i+=n) {
    a[i] = 1;
  }

  for (auto i: a)
    if (i)
      ++q;

  std::cout << q << std::endl;
  return 0;
}
