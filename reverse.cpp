#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Swap the elements at the start and end indices
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, n);

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
