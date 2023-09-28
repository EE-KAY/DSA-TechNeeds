#include <iostream>
using namespace std;
int main(){
    int x, counter = 0;
    cout << "Enter a number: ";
    cin >>x;

    while (x > 0){
        x = x / 10;
        counter++;
    }
    
    // Displaying output
    cout << "Total no. of digits: " << counter << endl;
    return 0;
}
