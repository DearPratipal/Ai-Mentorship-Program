/* 
Write a function to count the number of digits in a number and then print the square of this number   
*/

#include <iostream>
using namespace std;
void countTheNumber(int x)
{
    int digits = 0;
    for (int i = 1; x > 0; i++)
    {
        int remainder = x % 10;
        digits++;
        x = x / 10;
    }
    cout << "the total digits present in given number is " << digits << endl;
    cout << "and the square of digits is " << digits * digits << endl;
    return;
}
int main()
{
    int a;
    cout << "enter the value of number of which you want to count the digit and its square:";
    cin >> a;
    countTheNumber(a);
    return 0;
}