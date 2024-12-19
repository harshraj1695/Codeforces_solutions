#include <iostream>
#include <string>
using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    int length = num1.length();

    string result(length, '0');
    for (int i = 0; i < length; ++i) {
        if (num1[i] != num2[i]) {
            result[i] = '1'; 
        }
    }
    cout << result << endl;

    return 0;
}
