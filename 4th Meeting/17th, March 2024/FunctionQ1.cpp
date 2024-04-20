// Q1 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;


void area(float x){
    float pi = 3.14;
    cout<<"The Circle Area's: "<<pi*x*x;
}
int main(){
    float radius;
    cout<<"Enter the Circle's Redius:";
    cin>>radius;
    area(radius);
   

    return 0;
}