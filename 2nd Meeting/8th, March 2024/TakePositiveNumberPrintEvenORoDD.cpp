//Take positive integer input and tell if it is even or odd.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number :";
    cin>>a;

    if(a%2==0){
        cout<<"The Number is "<<a<<"Even";
    }
    else{
        cout<<"The Number is " <<a <<"Odd";
    }
return 0;
}