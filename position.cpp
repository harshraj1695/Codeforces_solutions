#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int lower_bound = max(a + 1, n - b);
    int result = n - lower_bound + 1;
    cout << result << endl;
    return 0;
}
