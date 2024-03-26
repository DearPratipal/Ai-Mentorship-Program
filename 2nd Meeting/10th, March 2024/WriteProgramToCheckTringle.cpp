//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter length of a:";
    cin >> a;
    cout << "Enter length of b:";
    cin >> b;
    cout << "Enter length of c:";
    cin >> c;

    if (a + b > c && a + c > b && c + b > a)
    {
        if (a == b && b == c && a == c)
        {
            cout << "it is an equilateral triangle.";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "it is an  isosceles triangle.";
        }
        else
        {
            cout << "it is a scalene triangle.";
        }
    }
    else
    {
        cout << "it is not a triangle.";
    }

    return 0;
}