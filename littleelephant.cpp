#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    cout << n << " ";
    for (int i = 1; i < n; ++i) {
        cout << i << " ";
    }
    
    
    return 0;
}