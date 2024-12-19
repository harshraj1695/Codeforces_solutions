#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> position;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        position[arr[i]] = i + 1; 
    }

    int m;
    cin >> m;
    vector<int> queries(m);
    
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    long long vas = 0;
    long long pet = 0;
    for (int i = 0; i < m; i++) {
        int pos = position[queries[i]];
        vas += pos;          
        pet += (n - pos + 1); 
    }

    cout << vas << " " << pet<< endl;

    return 0;
}
