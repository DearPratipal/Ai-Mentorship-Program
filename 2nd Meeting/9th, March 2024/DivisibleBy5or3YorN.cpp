//Take positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;

int main(){
    int num;
    
    //Number Likhe
    cout<<"Enter the Three Number :";
    cin>>num;

    if(num %3==0 && num %5==0){
        cout<<"The Number is Divisible by 5 and 3";
    }
    else{
        cout<<"The Number isn't Divisible by 5 and 3" ;
    }
return 0;
}