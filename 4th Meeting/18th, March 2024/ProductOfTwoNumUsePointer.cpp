
//  Write a program to find the product of two numbers using pointers.

#include <iostream>
using namespace std;

void product(int *x, int *y)
{
    int mul = *x * *y;
    cout << "the product of " << *x <<" and "<< *y << " is " << mul<<endl;
}

int main()
{
    int a, b;
    cout << "enter the value of first number :";
    cin >> a;
    cout << "enter the value of second number :";
    cin >> b;
    product(&a, &b);
    return 0;
}