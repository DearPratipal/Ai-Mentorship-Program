// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;
    for (int idx = 0; idx < 5; idx++)
    {
        product= product * arr[idx];
        
    }
    cout<<"the product of element of arry is:"<<product;
    return 0;
}