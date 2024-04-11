//PRINT THE STAR CROSS PATTERN

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the size of the cross (odd number): ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "Size must be odd." << endl;
        return 1;
    }

    // Printing the cross pattern
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (j == i || j == N - i + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
