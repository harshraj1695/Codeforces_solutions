#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    map<char, int> mpp;
    for (char c : s) {
        mpp[c]++;
    }

    string part = "";  
    for (auto it : mpp) {
        if (it.second % k != 0) {
            cout << -1;  
            return 0;
        }
        part += string(it.second / k, it.first);
    }

    string result = "";
    for (int i = 0; i < k; i++) {
        result += part;
    }

    cout << result; 
    return 0;
}
