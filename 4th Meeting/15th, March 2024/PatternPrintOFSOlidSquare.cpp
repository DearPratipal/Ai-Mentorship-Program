/*
Print the Solid Square  pattern 
****
****
**** 
**** 

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Num. of Lines :";
    cin>>n;
    /* cout<<"Enter the Num. of Rows :";
    cin>>m;
 */

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            cout<<" * ";
        }
        cout<<endl;
    }
    

    return 0;
    
}
