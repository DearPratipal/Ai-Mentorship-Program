/* Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D */

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter The Number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; i<=i; j+=2){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}