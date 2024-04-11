/* Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D */

/* #include<iostream>
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
} */

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; ++i) {
        
        for (int j = 1; j <= cols; ++j) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
