
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<long long>res;
    while(t!=0){
        int a;
        cin>>a;
        vector<int>arr1(a);
        vector<int>arr2(a);
        // int arr2[n];
        for(int i=0;i<a;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<a;i++){
            cin>>arr2[i];
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        long long sum=0;
        for(int i=0;i<a;i++){
            sum+=(long long)arr1[i]*arr2[i];
        }
        res.push_back(sum);
        t--;
    }
    for(int i=0;i<res.size();i++){
        cout<<"Case #"<<i+1<<":"<<" "<<res[i]<<endl;
    }
   
}