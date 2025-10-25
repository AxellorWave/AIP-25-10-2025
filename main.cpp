#include <iostream>

bool isPyth(unsigned a, unsigned b, unsigned c)
{
  bool d = a*a == (b*b + c*c);
  d = d || (b*b == (a*a + c*c));
  d = d || (c*c == (a*a + b*b));
  return d;
}

int main()
{
  using u_t = unsigned;
  u_t a = 0;
  size_t count = 0;
  while (std::cin >> a) {
    count+=isPyth(a,b,c) ? 1 : 0;
    c = b;
    b = a;
  }

  if (std::cin.eof()) {
    std::cout << count << "\n";
  } else if (std::cin.fail()) {
    std::cout << "Error\n";
    return 1;
  }
}
