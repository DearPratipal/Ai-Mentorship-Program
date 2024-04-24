/* Calculate the sum of all the elements in the
given array. */

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {65,47,89,32,14};
    int sum = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        sum = sum + arr[idx];
        
    }
    cout<<"the sum of element of arry is:"<<sum;
    return 0;
}