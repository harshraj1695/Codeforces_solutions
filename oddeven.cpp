#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k > (n + 1)) {
        cout <<0<< endl;
        
    }

    long long numOdds = (n + 1) / 2;
    long long numEvens = (n + 1) / 2;

    if (numEvens < (n / 2) + 1) {
        numEvens = (n / 2) + 1;
    }

    if (k <= numOdds) {
        cout << 2 * (k - 1) + 1 << endl;
    } else {
        cout << 2 * (k - numOdds) << endl;
    }

    return 0;
}