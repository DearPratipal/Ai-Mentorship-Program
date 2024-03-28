//Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter How Many Terms You want to Print :";
    cin>>num;

    int gp=3;
    
    for(int i=1; i<=num; i++){
        cout<<gp<<endl;
        gp*=4;
    }
    return 0;
}