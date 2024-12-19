#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>nums(7);
    for(int i=0;i<7;i++){
        cin>>nums[i];
    }
    int sum=0;
    
    while(sum<n){
           for(int i=0;i<7;i++){
        sum+=nums[i];
        if(sum>=n){
            cout<<i+1;
            return 0;
        }
    }
    }
}