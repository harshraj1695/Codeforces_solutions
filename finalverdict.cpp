#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
    if (sum % n == 0 && sum / n == x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
