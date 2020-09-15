#include <iostream>

int main() {
  int n, w, mm = 101, mini, maxi, nn = 0;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    if (mm >= w) {
      mm = w;
      mini = i;
    }

    if (nn < w) {
      nn = w;
      maxi = i;
    }
  }

  int rr = maxi;
  if (maxi > mini)
    rr--;

  rr += n - mini - 1;
  std::cout << rr << std::endl;
  return 0;
}
