//Print the factorial of a given number ‘n’

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin >>num;
    
    int factorial = 1;
    for (int i = 2; i <=num; i++)
    {
        factorial = factorial*i;
    }
    cout <<"the factorial of "<<num<<" is:"<<factorial;
    return 0;

}