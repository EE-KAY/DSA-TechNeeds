#include<iostream>
using namespace std;
int main(){
    int min,max;
    cout<<"Lower value of range:";
    cin>>min;
    cout<<"Upper value of range: ";
    cin>>max;
    
    for(int a=min;a<=max;a++){
        bool prime=true;
        if(a==1 or a==0){
            prime=false;
        }
        for(int b=2;b<=i/2;b++){
            if(a%b==0){
                prime=false;    
                break;
            }
        }
        if(prime==true){
            cout<<a<<"\n";
        }    
}
    return 0;
}
