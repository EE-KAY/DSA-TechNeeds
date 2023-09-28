#include <iostream>
using namespace std;

int main() {
  int a, x, counter = 1;
  cin >> a;
  
  if (a <= 1)
    counter = 0;

  for ( x = 2 ; x <= a/2 ; x++){
    if (a % x == 0){
      counter = 0;
      break;
    }
  }
  if (counter == 1)
    cout << "The number is a prime number." ;
  else
    cout << "The number is not a prime number." ;

  return 0;
}
