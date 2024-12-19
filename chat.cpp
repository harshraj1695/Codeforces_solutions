#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int h = 1, e = 1, l = 2, o = 1; 
    int i = 0;
    
    while (s[i] != '\0')
    {
        if (h != 0) 
        {
            if (s[i] == 'h')
                h--;
        }
        else if (e != 0) 
        {
            if (s[i] == 'e')
                e--;
        }
        else if (l != 0) 
        {
            if (s[i] == 'l')
                l--;
        }
        else if (o != 0) 
        {
            if (s[i] == 'o')
            {
                cout << "YES"; 
                return 0;
            }
        }

        i++; 
    }
    cout << "NO";
    return 0;
}
