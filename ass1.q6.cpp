#include <iostream>
using namespace std;

int main() {

  int no, reverse = 0, rem;

  cout << "Enter an integer: ";
  cin >> no;

  while(no != 0) {
    rem = no % 10;
    reverse = reverse * 10 + rem;
    no /= 10;
  }

  cout << "Reversed Number = " << reverse;

  return 0;
}
