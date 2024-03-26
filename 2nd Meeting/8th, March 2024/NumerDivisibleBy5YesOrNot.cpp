//Take positive integer input and tell if it is divisible by 5 or not

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number :";
    cin>>a;

    if(a%5==0){
        cout<<"This Number "<<a<<" is Divisible By 5";
    }
    else{
        cout<<"The Number " <<a <<" is not Divisible By 5";
    }
return 0;
}