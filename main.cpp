#include <iostream>
#include <string>

using std::cout;
  using std::cin;
    using std::string;

int main() {
  string name;
  int years = 0;
  cout << "First name: ";
  cin >> name;
  cout << "Years coding goal: ";
  cin >> years;
  cout << name << " — 1/3/5/7 year story goes here (" << years << ")\n";
  return 0;
}
