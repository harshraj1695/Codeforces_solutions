#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    
    vector<int>pl(12);
    for(int i=0;i<12;i++){
        cin>>pl[i];
    }
     if(k==0){
        cout<<0;
        return 0;
    }
    sort(pl.begin(),pl.end(),greater<int>());
    int sum=0;
    int count=0;
    for(int i=0;i<12;i++){
        sum+=pl[i];
        count++;
        if(sum>=k){
            cout<<count;
            return 0;
        }
    }
    if(sum<k) cout<<-1;
    
    return 0;
}