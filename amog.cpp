#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string c = "";
        if (s[n - 2] == 'u' && s[n - 1] == 's')
        {

            for (int i = 0; i < n - 2; i++)
            {
                c += s[i];
            }
            c += 'i';
            cout << c << endl;
            // break;
        }
        else if (s[n - 1] == 'i')
        {
            for (int i = 0; i < n - 1; i++)
            {
                c += s[i];
            }
            c += 'u';
            c += 's';
            cout << c << endl;
            // break;
        }
    }

    return 0;
}