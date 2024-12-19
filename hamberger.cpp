#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    string s;
    cin >> s;
    
    // Initial quantities of ingredients
    ll b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    
    // Prices of ingredients
    ll p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    
    // Available rubles
    ll r;
    cin >> r;
    
    // Count the required quantities of each ingredient for one hamburger
    ll a = 0, b = 0, c = 0;
    for (char ch : s) {
        if (ch == 'B') a++;
        else if (ch == 'S') b++;
        else if (ch == 'C') c++;
    }
    
    // Binary search for the maximum number of hamburgers
    ll low = 0, high = 1e12;  // Set a very high number for the upper bound
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        // Calculate the additional quantities required
        ll r1 = max(0LL, a * mid - b1);
        ll r2 = max(0LL, b * mid - b2);
        ll r3 = max(0LL, c * mid - b3);
        
        // Calculate the total cost
        ll price = r1 * p1 + r2 * p2 + r3 * p3;
        
        if (price <= r) {
            low = mid + 1;  // We can afford more hamburgers
        } else {
            high = mid - 1; // Too expensive, try fewer hamburgers
        }
    }
    
    // Print the maximum number of hamburgers that can be made within the budget
    cout << high << endl;
    
    return 0;
}
