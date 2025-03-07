#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       
        int actions = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                actions++;
                if (i + 1 < n && s[i + 1] == '.') {
                    i++;
                }
                if (i + 2 < n && s[i + 2] == '.') {
                    i++;
                }
            }
        }
        cout<<actions<<endl;
    }
 
    return 0;
}