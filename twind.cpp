#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sumi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sumi+=arr[i];
    }
    int sumj=0;
    int count=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        sumj+=arr[i];
        count++;
        if(sumj>sumi-sumj){
             cout<<count;
             return 0;
        }
    }
    return 0;

}
