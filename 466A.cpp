#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int nor = n * a;
    int mi = n / m;
    int cp = mi * b + (n % m) * a;
    cp = min(cp, (mi + 1) * b);

    cout << min(cp, nor) << endl;

    return 0;
}
