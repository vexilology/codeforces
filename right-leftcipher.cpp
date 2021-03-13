#include <iostream>
#include <cstring>
#include <algorithm>

int main() {
  std::string w;
  char s[110];
  std::cin >> s;
  int l = strlen(s);

  for (int i=0, j=l-1, t=l&1; i<=j; t^=1)
    if (t)
      w += s[i++];
    else
      w += s[j--];

  std::reverse(w.begin(), w.end());

  std::cout << w << std::endl;
  return 0;
}
