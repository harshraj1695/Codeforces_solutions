#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int m;
    cin >> m;
    int re[m];
    for (int j = 0; j < m; j++) {
        cin >> re[j];
    }

    int maxi = INT_MIN;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            float rat = float(re[j]) / p[i];
            if (rat == int(rat)) {
                if (rat == maxi) {
                    count++;
                } else if (rat > maxi) {
                    maxi = rat;
                    count = 1;
                }
            }
        }
    }

    cout << count;
    return 0;
}
