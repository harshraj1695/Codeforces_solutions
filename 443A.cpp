#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt=0;
    int i=1;
    map<char,int>mpp;
  for (int i = 1; i < s.length()-1; i++) {
        if (s[i] == ',' || s[i]==' ') {
            continue;
        }
        mpp[s[i]]++; 
    }
for (auto it : mpp) {
        cnt++;
    }
    cout<<cnt;
    
}