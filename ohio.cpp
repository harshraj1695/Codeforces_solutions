#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
     bool f = false;

        do
        {
            f = false;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    s.erase(i + 1);
                    if (i + 1 < s.length())
                    {
                        s[i] = s[i + 1];
                    }
                    else if (i - 1 >= 0)
                    {
                        s[i] = s[i - 1];
                    }
                    f = true;
                }
            }

        } while (f);
        cout<<s.length()<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    //     string s;
    //     cin>>s;
    //     int n=s.length();
    //     // int count=1;
    //     if((n==2 && s[0]==s[1] ) || n==1){
    //         cout<<1<<endl;
    //     }else {
    //     for(int i=1;i<n-1;){
    //         if(s[i]==s[i+1]){
    //            s.erase(i, 2); 
    //         //    cout<<s<<" ";
    //         n -= 2; 
    //         // if (i > 0) i--; 
    //     } else {
    //         i++;
    //     }
    // }
    // cout<<s.length()<<endl;
    //     }
    solve();

    }

    return 0;
}
