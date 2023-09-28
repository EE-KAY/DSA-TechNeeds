#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cout<<"Enter marks here: ";
    cin>>marks;
    if(marks>90){
        cout<<" Grade: A";}
    else if(marks>80 && marks<=90){
        cout<<"Grade: B";}
    else if(marks>70 && marks<=80){
        cout<<"Grade: C";}
    else if(marks>60 && marks<=70){
        cout<<"Grade: D";}
    else if(marks<=60 && marks>0){
      cout<<"Fail. jaake padhai karo";}
    else{
        cout<<"Please enter valid non-negative integer as marks." ;}
return 0;} 
