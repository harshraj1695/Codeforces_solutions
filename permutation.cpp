#include <bits/stdc++.h>


using namespace std;

bool issquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

vector<int> pp(int n) {
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1; 
    }

    int prefixSum = 0;
    // unordered_set<int> squareSet;
    
    for (int i = 0; i < n; i++) {
        prefixSum += p[i];
        if (issquare(prefixSum)) {
            if (i + 1 < n) {
                swap(p[i], p[i + 1]);
                prefixSum += (p[i] - p[i + 1]); 
            } else {
                return {-1};
            }
        }
    }

    return p;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;

    vector<int> result = pp(n);
    if (result.size() == 1 && result[0] == -1) {
        cout << -1 << endl;
    } else {
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    }
    return 0;
}
