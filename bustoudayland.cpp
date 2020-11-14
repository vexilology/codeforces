#include <iostream>
#include <vector>

int main() {
  std::string w; bool b = false;
  int n;
  std::cin >> n;
  std::vector<std::string> a(n);

  for (int i=0; i<n; ++i) {
    std::cin >> a[i];
  }

  for (int i=0; i<a.size(); ++i) {
    std::string temp = a[i];
    if (temp[0] == temp[1] && temp[0] == 'O') {
      temp[0] = '+', temp[1] = '+', b = true;
      a[i] = temp;
      break;
    }
    else if (temp[3] == temp[4] && temp[3] == 'O') {
      temp[3] = '+', temp[4] = '+', b = true, a[i] = temp;
      break;
    }
  }

  if (b) {
    std::cout << "YES" << std::endl;
    for (auto i: a)
      std::cout << i << std::endl;
  }
  else
    std::cout << "NO" << std::endl;

  return 0;
}
