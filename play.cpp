#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k;
        cin>>k;
        if(k==1){
            cout<<"YES"<<endl;
            continue;
        }
        k+=2;
        if(k%3!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }


    return 0;
}