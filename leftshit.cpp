#include <bits/stdc++.h>
using namespace std;
void leftRotate(std::vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; 

    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of left rotations: ";
    cin >> d;

    leftRotate(arr, d);

    cout << "Array after left rotation:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}