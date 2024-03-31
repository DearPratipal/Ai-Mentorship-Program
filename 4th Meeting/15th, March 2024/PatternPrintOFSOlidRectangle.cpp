/* Print the solid reactangle pattern

*****
*****
*****
 
 */

#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Enter the Num. of Column :";
    cin>>n;
    cout<<"Enter the Num. of Rows :";
    cin>>m;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){

            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
    
}

