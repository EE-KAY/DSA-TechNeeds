#include<iostream>
using namespace std;
int main() {
    int a, b, x;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    if(a>b)
        x = a;
    else
        x = b;
    while(1) {
        if((x%a == 0) && (x%b == 0))
            break;
        else
            x++;}
    cout<<"\nLCM ("<<a<<", "<<b<<") = "<<x;
    cout<<endl;
    return 0;
}
