#include <bits/stdc++.h>
using namespace std;

int main() {
    char remix[201]; 
    cin >> remix;

    bool inWord = false;  
    for (int i = 0; remix[i] != '\0'; ++i) {
        if (remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B') {
            if (inWord) { 
                cout << ' ';
                inWord = false;
            }
            i += 2;  
        } else {
            cout << remix[i];
            inWord = true;  
        }
    }

    cout << endl;
    return 0;
}
