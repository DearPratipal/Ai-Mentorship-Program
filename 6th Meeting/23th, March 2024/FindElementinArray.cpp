/* Find the element x in the array . Take array and
x as input.
 */

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int idx = 0; idx < 5; idx++)
    {
        cin >> arr[idx];
    }

    int elementx;
    cout << "enter the value of element x :";
    cin >> elementx;

    int result = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        if (arr[idx] == elementx)
        {
            cout << "the element " << elementx << " is present at index " << idx<<endl;
        }
        else
        continue;
    }
    return 0;
}