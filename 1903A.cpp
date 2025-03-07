#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            cin>>res[i];
        }
        if(is_sorted(res.begin(),res.end())){
            cout<<"YES"<<endl;
        } else {
           if(k>1){
            cout<<"YES"<<endl;

           }else{
            cout<<"NO"<<endl;
           }
        }
    }
    return 0;
}