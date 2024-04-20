/*   write a function to calculate the
Combination and Permutation   */

#include <iostream>
using namespace std;
int factorial(int f)
{
    int fact = 1;
    for (int i = 1; i <= f; i++)
    {
        fact *= i;
    }
    return fact;
}


void permutation(int x, int y)
{
    cout << "the permutation of two given number is :" << factorial(x) / factorial(x - y) << endl;
}

void combination(int x, int y)
{
    cout << "the combination of two given number is :" << factorial(x) / (factorial(x - y) * factorial(y)) << endl;
}
int main()
{
    int n, r;
    cout << "enter the value of n for which you want to print the permutation and its combinatin :";
    cin >> n;
    cout << "enter the value of r for which you want to print the permutation and its combinatin :";
    cin >> r;
    permutation(n, r);
    combination(n,r);
    return 0;
}