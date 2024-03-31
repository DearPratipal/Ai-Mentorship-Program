//WAP to count digits of a given number.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Digit Countable Number :";
    cin >> num;
    int DIgits = 0;
    if (num == 0)
    {
        cout << "the no of digit is 1.";
    }
    for (int i = 1; num > 0; i++)
    {
        DIgits = DIgits + 1;
        num = num / 10;
    }
    cout << "The Number is :" << DIgits;
    return 0;
}