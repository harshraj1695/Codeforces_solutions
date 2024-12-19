#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    while(i!=n){
       if(s[i]==s[i+1]) count++;
       i++;
    }
    // if(n==1) {
    //     cout<<0;
    // }
    cout<<count;
}