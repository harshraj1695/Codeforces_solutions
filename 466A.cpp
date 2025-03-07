#include <bits/stdc++.h>
using namespace std;

int findLongestIncreasingSubarray(vector<int> res, int x) {
    int n = res.size();
    int max_length = 1;

    // First, find the longest increasing sequence without multiplication
    int current_length = 1;
    for (int i = 1; i < n; i++) {
        if (res[i] > res[i - 1]) {
            current_length++;
        } else {
            current_length = 1; // Reset if sequence breaks
        }
        max_length = max(max_length, current_length);
    }

    // Now, try multiplying each element once and see the effect
    for (int i = 0; i < n; i++) {
        int original = res[i];
        res[i] *= x;

        // Check the new longest increasing sequence
        current_length = 1;
        for (int j = 1; j < n; j++) {
            if (res[j] > res[j - 1]) {
                current_length++;
            } else {
                current_length = 1;
            }
            max_length = max(max_length, current_length);
        }

        // Restore original value
        res[i] = original;
    }

    return max_length;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            cin >> res[i];
        }

        int max_sequence = findLongestIncreasingSubarray(res, x);
        cout << max_sequence << endl;
    }
    return 0;
}
