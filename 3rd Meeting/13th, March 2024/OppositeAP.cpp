//Display this AP - 100,97,94,..upto all terms which are positive. N 

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Last Valua of AP : ";
    cin >> num;
    int AP = num;
    for (int i = 1;  AP>=0; i++)
    {
        cout << AP << " ";
        AP-=3;
    }
    return 0;
}