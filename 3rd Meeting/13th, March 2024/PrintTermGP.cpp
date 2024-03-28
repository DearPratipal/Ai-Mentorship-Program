// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter How Many Terms You want to Print :";
    cin>>num;

    int gp=1;
    
    for(int i=1; i<=num; i++){
        cout<<gp<<endl;
        gp*=2;
    }
    return 0;
}