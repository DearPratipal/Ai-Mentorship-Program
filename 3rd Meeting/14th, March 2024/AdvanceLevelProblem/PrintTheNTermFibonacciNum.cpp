//Print the nth fibonacci number

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Terms You want to Find: ";
    cin >> num;
    int a = 0, b = 0, fibonacci = 1;
    //fibonacci mean addition of series number

    for (int i = 1; i < num; i++)
    {
        int dabba = fibonacci;
        fibonacci = fibonacci + b;
        a = b;
        b = dabba;
    }
    cout << "The " << num << "th fibonacci number is :" << fibonacci;
    return 0;
}