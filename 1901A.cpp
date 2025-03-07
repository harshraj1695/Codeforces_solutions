#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int a=2*(x-ans[n-1]);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(i==0){
                int b=ans[i];
                maxi=max(a,b);
            }else{
                int c=ans[i]-ans[i-1];
                maxi=max(maxi,c);
            }
        }
        cout<<maxi<<endl;
    }
 
    return 0;
}