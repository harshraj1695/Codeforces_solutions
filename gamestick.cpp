#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    cin >> n >> m;
         int minSticks = min(n, m);
        if (minSticks % 2 == 1) {
        cout << "Akshat" << endl; 
    } else {
        cout << "Malvika" << endl; 
    }

    return 0;
}