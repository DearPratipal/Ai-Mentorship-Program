//Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;

int main(){
    int A;
    cout<<"Enter the Number :";
    cin>>A;

    if(A>99 && A<999){
        cout<<"This is three digit number.";
    }
    else{
        cout<<"This isn't three digit number.";
    }
    return 0;
}