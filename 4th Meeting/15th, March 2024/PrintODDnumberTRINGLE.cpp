/* Print the odd Number Triangle pattern

1 
1 3 
1 3 5 
1 3 5 7 */

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        int num = 1; 
        
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num += 2; 
        }
        cout << endl;
    }

    return 0;
}
