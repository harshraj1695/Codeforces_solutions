#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    for (size_t i = 0; i < n.length();) {
        if (n.substr(i, 3) == "144") {
            i += 3; 
        }
        else if (n.substr(i, 2) == "14") {
            i += 2; 
        }
        else if (n[i] == '1') {
            i += 1; 
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
