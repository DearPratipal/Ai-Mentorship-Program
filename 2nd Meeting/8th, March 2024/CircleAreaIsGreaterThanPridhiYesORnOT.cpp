/*
Given the radius of the circle predict whether numerically 
area of this circle is larger than the circumference or not
*/

#include<iostream>
using namespace std;

int main(){
    int redius, Area, C;//C for circumference
    cout<<"Enter the Redius of Circle:";
    cin>>redius;

    Area = 3.14*redius*redius;
    C = 2*3.14*redius;
    
    if(Area<C){
        cout<<"The circumference is larger the Area";
    }
    else{
        cout<<"The circumference isn't larger the Area";
    }
    return 0;
}