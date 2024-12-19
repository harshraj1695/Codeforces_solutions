#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    int flag=0;
    // for(int i=0;i<s.length();i++){
    //       if(islower(s[i])==islower(s1[i])){
    //         continue;;
    //       }
    //       flag=1;
    // }
    // if(flag==0) cout<<0;
    // cout<<1;
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    if (s < s1) cout << -1;
    else if (s > s1) cout << 1;
    else cout << 0;
}