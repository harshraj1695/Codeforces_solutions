#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>tv(n);
    for(int i=0;i<n;i++){
        cin>>tv[i];
    }
    sort(tv.begin(),tv.end());
    int pro=0;
    int i=0;
    while(m!=0){
       if(tv[i]<0){
        pro+=-tv[i];
       }
       m--;
       i++;
    }
    cout<<pro;
}