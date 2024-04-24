/* Find the doublet in the Array whose sum is 
equal to the given value x (LEETCODE TWO SUM) */

#include <iostream>
using namespace std;


int main (){

int array[]={3,4,6,7,1};

int targetsum;
cout<<"Enter the Target Element: "<<endl;
cin>>targetsum;


int size=5;
int pairs=0;

for(int i=0;i<size;i++){7
    for(int j=i+1;j<size; j++){
    
    if(array[i]+array[j]==targetsum){
        pairs++;
            }
        }
    }
    cout<<pairs<<endl;


return 0;
}