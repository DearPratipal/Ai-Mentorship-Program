/* PRINT THE FLOYD TRIANGLE PATTERN
1
2 3
4 5 6
7 8 9 10 */

#include <iostream>
using namespace std;

int main() {
    int rows, number = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for numbers in each row
        for (int j = 1; j <= i; ++j) {
            cout << number << " ";
            ++number;
        }
        cout << endl;
    }

    return 0;
}
