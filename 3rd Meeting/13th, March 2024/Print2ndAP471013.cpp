//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter How Many Terms You want to Print :";
    cin>>num;

    int ap=4;
    
    for(int i=1; i<=num; i++){
        cout<<ap<<endl;
        ap+=3;
    }
    return 0;
}