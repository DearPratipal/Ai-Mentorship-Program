//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter

#include<iostream>
using namespace std;

int main(){
    int L, B;// L is Legnth & B is Breath of Rectengle
    
    //Number Likhe
    cout<<"Enter the Legnth :";
    cin>>L;
    cout<<"Enter the Breath :";
    cin>>B;
    int Area, Perimeter;

    Area=(L*B);//Area of Rectengle
    Perimeter=2*L+2*B; //Perimeter is Paridhi of Rectengle 

    if(L<=0 || B<=0){
        cout<<"ERROR : Please Enter +Ve Number";
        return 1;
    }
    if(Area>Perimeter){
        cout<<"The Area of Rectengle is graeter than Perimeter";
    }
    else{
        cout<<"The Area of Rectengle is Lower than Perimeter";
    }


return 0;
}