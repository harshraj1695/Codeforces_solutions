#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int count=0;
   for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
          if(arr[j]>arr[i]){
           // cout<<arr[i]<<" "<<arr[j]<<endl;
            swap(arr[i],arr[j]);
            count++;
            break;
          }
    }
   }
 cout<<count;
}