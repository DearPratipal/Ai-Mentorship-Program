/* Print the number triangle pattern
1 
1 2 
1 2 3 
1 2 3 4 */\

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
        for(int j=1; j<=i; j++){

            cout<< j ;
        }
        cout<<endl;
    }
    

    return 0;
    
}