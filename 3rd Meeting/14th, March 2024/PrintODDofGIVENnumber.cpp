//WAP to print odd numbers from 1 to 100.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number :";
    cin>>num;

    for(int i=1; i<=num; i+=2){
        cout<<i<<endl;
    }
    return 0;
}