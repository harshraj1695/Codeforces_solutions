#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_slices = c * d;
    int toasts_by_drink = total_drink / (n * nl);
    int toasts_by_limes = total_slices / n;
    int toasts_by_salt = p / (n * np);
    int max_toasts = min({toasts_by_drink, toasts_by_limes, toasts_by_salt});
    cout << max_toasts << std::endl;
    
    return 0;
}
