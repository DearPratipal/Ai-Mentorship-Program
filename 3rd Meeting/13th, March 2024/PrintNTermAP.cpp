//Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter How Many Terms You want to Print :";
    cin>>num;

    int ap=1;
    
    for(int i=1; i<=num; i++){
        cout<<ap<<endl;
        ap+=2;
    }
    return 0;
}