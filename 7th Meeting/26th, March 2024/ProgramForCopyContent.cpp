/* Write a program to copy the contents of one 
array into another in the reverse order.  */

#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Change the size as needed
    int original[size] = {1, 2, 3, 4, 5};
    int reversed[size];

    
    for (int i = 0; i < size; ++i) {
        reversed[i] = original[size - 1 - i];
    }

    // Displaying the original array
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << original[i] << " ";
    }
    cout << endl;

    // Displaying the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}
