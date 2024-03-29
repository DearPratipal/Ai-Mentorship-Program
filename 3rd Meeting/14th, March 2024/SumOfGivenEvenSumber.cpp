/*WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of which you want to print the sum of even digits:";
    cin >> n;
    int sumOfevenDigits = 0;
    for (int i = 1; n > 0; i++)
    {
        int remainder = n % 10;
        n = n / 10;
        if (remainder % 2 == 0)
        {
            sumOfevenDigits = sumOfevenDigits + remainder;
        }
        else
        {
            continue;
        }
    }
    cout << "the sum of even digits of given no is "<< sumOfevenDigits<<endl;
    return 0;
}