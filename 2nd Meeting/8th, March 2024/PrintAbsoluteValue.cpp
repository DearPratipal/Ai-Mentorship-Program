//Given an integer Print the absolute value of that integer


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Intiger Number :";
    cin>>num;

    if(num<0){
        cout<<"Absolute Value :"<<-num;
    }
    else{
        cout<<"Absolute Value :"<<num;
    }
    return 0;
}