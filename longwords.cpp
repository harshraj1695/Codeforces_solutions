#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    vector<string> ne(n);
    
    for(int i = 0; i < n; i++) {
        int l = s[i].length();
        if(l > 10) {
            ne[i] = s[i].substr(0, 1) + to_string(l - 2) + s[i].substr(l - 1, 1);
        } else {
            ne[i] = s[i];
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << ne[i] << endl;
    }
    
    return 0;
}
