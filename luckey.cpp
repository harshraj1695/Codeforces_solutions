#include <iostream>
using namespace std;
bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;  
        if (digit != 4 && digit != 7) {
            return false; 
        }
        number /= 10; 
    }
    return true; 
}

bool isAlmostLucky(int n) {
    for (int i = 1; i <= n; ++i) {
        if (isLucky(i) && n % i == 0) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int n;
    cin >> n;

    if (isAlmostLucky(n)) {
        cout << "YES"; 
    } else {
        cout << "NO" ;  
    }
    return 0;
}
