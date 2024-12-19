#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> fingers(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> fingers[i];
        total += fingers[i];
    }

    int validWays = 0;
    for (int dima = 1; dima <= 5; dima++) {
        int totalw = total + dima;
        if (totalw % (n + 1) != 1) {
            validWays++;
        }
    }

    cout << validWays << endl;

    return 0;
}
