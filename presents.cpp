#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> p(n); 
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i]; 
    }
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        int receiver = p[i];
        result[receiver - 1] = i + 1; 
    }
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " "; 
    }
   

    return 0;
}
