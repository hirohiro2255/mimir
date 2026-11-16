#include <iostream>

double square(double value);

int main() {
  double x = 3.0;
  double y = square(x);
  std::cout << x << ' ' << y << '\n';
  x = 4.0;
  y = square(x);
  std::cout << x << ' ' << y << '\n';
}

double square(double value) {
    return value * value;
}