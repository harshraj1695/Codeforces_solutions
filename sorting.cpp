#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "yes\n1 1\n";
        return 0;
    }
    int left = 0, right = n - 1;
    while (left < n - 1 && a[left] <= a[left + 1]) {
        left++;
    }
    while (right > 0 && a[right] >= a[right - 1]) {
        right--;
    }
    if (left == n - 1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    reverse(a.begin() + left, a.begin() + right + 1);
    if (is_sorted(a.begin(), a.end())) {
        cout << "yes\n" << left + 1 << " " << right + 1 << "\n"; 
    } else {
        cout << "no\n";
    }

    return 0;
}
