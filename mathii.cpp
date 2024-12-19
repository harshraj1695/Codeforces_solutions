#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> res;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]!='+'){
            res.push_back(s[i]);
        }
        i++;
    }
    sort(res.begin(),res.end());
    string r;
    for(int i=0;i<res.size();i++){
        if(i==res.size()-1){
            r+=res[i];
        }else{
            r+=res[i];
            r+='+';
        }
    }
    cout<<r;

}