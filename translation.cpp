#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p;
    cin>>p;
    //reverse string s
    // string rev_s = s;
    reverse(s.begin(), s.end());
    if(s==p){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}