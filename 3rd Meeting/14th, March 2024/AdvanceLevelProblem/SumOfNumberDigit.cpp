//WAP to print sum of digits of a given number. 

#include<iostream>
using namespace std;

int main (){

    int n, sumOfDigits;
    cout << "Enter the Num Digit:";
    cin >> n;

    sumOfDigits = 0;

    for (int i = 1; n > 0; i++)
    {
        int remainder = n % 10;
        n = n / 10;
        sumOfDigits = sumOfDigits + remainder;
    }
    cout << "The Sum of Num Digit:" << sumOfDigits << endl;
    
    return 0;
}