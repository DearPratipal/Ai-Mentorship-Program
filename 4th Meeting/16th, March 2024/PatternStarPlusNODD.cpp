// PRINT THE STAR PLUS PATTERN (N=ODD)



#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N (odd): ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "N must be odd." << endl;
        return 1;
    }

    // Printing upper part of plus
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (j == (N / 2) + 1 || i == (N / 2) + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

