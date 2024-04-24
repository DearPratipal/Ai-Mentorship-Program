/* Find the maximum value out of all the elements
in the array. */

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {65,47,89,32,14};
    int maximumValue = arr[0]; 
    for (int idx = 0; idx < 5; idx++)
    {
       if (maximumValue<arr[idx])
       {
        maximumValue = arr[idx];
       }
        else
        continue; 
        
    }
     cout<<"the maximum value out of array element is :"<<maximumValue;
    return 0;
}