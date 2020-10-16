#include <iostream>

int main() {
  int n, temp, w=0, res=0;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> temp;
    if (temp > 0)
      w += temp;
    else if (temp < 0)
      if (w > 0)
        --w;
      else
        res++;
  }

  std::cout << res << std::endl;
  return 0;
}
