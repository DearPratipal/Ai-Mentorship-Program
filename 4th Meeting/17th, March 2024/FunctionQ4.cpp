
/*    Given two numbers a and b, write a
function to print all odd numbers between them.   */

#include <iostream>
using namespace std;
void oddNumber(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
    return ;
}
int main()
{
    int a, b;
    cout << "enter the value of first number:";
    cin >> a;
    cout << "enter the value of second number:";
    cin >> b;
    oddNumber(a, b);
    return 0;
}