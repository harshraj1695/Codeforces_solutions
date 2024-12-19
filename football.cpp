#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    map<string,int>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
    string maxs="";
    int max=0;
    for(auto it=mpp.begin();it!=mpp.end();it++){
        if(it->second>max){
            max=it->second;
            maxs=it->first;
            }
    }
    cout<<maxs;
}