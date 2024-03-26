//Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;

int main(){
    int numA, numB, numC;
    
    //Number Likhe
    cout<<"Enter the Three Number :";
    cin>>numA>>numB>>numC;

    if(numA<=0 || numB<=0 || numC<=0){
        cout<<"ERROR : Please Enter +Ve Number";
        return 1;
    }
int Big = numA;
if(numB>Big){Big=numB;}
if(numC>Big){Big=numC;}

cout<<"The Greatest Number is : "<<Big;
return 0;
}
