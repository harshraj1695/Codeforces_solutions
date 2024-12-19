#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    vector<string> re;  
    
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;

       
        int low1 = min(a, b);
        int high1 = max(a, b);
        int low2 = min(c, d);
        int high2 = max(c, d);
        if ((low1 < low2 && low2 < high1 && high1 < high2) || (low2 < low1 && low1 < high2 && high2 < high1)) {
            re.push_back("YES");
        } else {
            re.push_back("NO");
        }
    }

    for(int i = 0; i < re.size(); i++) {
        cout << re[i] << endl;
    }

    return 0;
}
