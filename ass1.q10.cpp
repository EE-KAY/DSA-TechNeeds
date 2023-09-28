#include <iostream>
using namespace std;
int main(){
    int n, a = 1, b, counter;
    
    cout << "Enter any number to find prime factors: ";
    cin >> n;
    
    while (a <= n){
        counter = 0;
        if (n % a == 0){
            b = 1;
            while (b <= i){
                if (a % b == 0){
                    counter++;
                }
                b++;
            }
            if (counter == 2){
                couter << a << " is a prime factor of " << num << endl;
            }
        }
        a++;
    }
    return 0;
}
