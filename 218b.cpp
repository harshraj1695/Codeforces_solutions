#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ans(m);
    vector<int> ans1(m);
    
    for (int i = 0; i < m; i++) {
        cin >> ans[i];
        ans1[i] = ans[i];
    }

    int max = 0, min = 0;
    int i = 0;

    while (n > 0) {
        if (ans[i] > 0) {
            max += ans[i];
            ans[i]--;
            n--;
        }
        i = (i + 1) % m;
    }

    n = accumulate(ans1.begin(), ans1.end(), 0);

    i = 0;
    while (n > 0) {
        if (ans1[i] > 0) {
            min += ans1[i];
            ans1[i]--;
            n--;
        }
        i = (i + 1) % m;
    }

    cout << max << " " << min;  
}
