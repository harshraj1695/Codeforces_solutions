#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    unordered_map<char,int>npp;
    for(int i=0;i<s.length();i++){
        npp[s[i]]++;
    }
    int count=0;
    for(auto it:npp){
        count++;
    }
    if(count%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}