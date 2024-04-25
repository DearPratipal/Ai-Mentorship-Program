/* Rotate the given array ‘a’ by k steps, where k is non-negative.  */
// Note : k can be greater than n as well where n is the size of array ‘a'

#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k) {
    int temp[k];

        for (int i = 0; i < k; ++i) {
            temp[i] = arr[i];
        }

        for (int i = k; i < n; ++i) {
            arr[i - k] = arr[i];
        }
        
        for (int i = 0; i < k; ++i) {
            arr[n - k + i] = temp[i];
        }
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k; // Number of steps to rotate

    cout<<"Enter the K - Step : ";
    cin>>k;

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate(arr, n, k);

    cout << "Array after rotating by " << k << " steps: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
