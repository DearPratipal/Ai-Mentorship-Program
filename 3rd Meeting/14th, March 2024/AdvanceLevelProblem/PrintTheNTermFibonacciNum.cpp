//Print the nth fibonacci number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number till which you want to get fibonacci:";
    cin >> n;
    int a = 0, b = 0, fibonacci = 1;
    for (int i = 1; i < n; i++)
    {
        int dabba = fibonacci;
        fibonacci = fibonacci + b;
        a = b;
        b = dabba;
    }
    cout << "the " << n << "th fibonacci number is :" << fibonacci;
    return 0;
}