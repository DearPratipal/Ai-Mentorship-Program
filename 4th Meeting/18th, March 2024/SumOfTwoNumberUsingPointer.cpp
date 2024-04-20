
//  Write a program to find the sum of two numbers using pointers.

#include <iostream>
using namespace std;
void sum(int *x, int *y)
{
    int add = *x + *y;
    cout << "the sum of " << *x <<" and "<< *y << " is " << add<<endl;
}
int main()
{
    int a, b;
    cout << "enter the value of first number :";
    cin >> a;
    cout << "enter the value of second number :";
    cin >> b;
    sum(&a, &b);
    return 0;
}