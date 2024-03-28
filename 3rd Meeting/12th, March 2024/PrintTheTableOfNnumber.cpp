// Print the table of ‘n’. Here ‘n’ is an integer which the user will input

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Print the Table of : ";
    cin>>num;
    
    for(int i=num; i<=num*10; i+=num){
            cout<<i<<endl;
        
    }
    return 0;
}