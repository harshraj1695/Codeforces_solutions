#include<bits/stdc++.h>
using namespace std;
void ans(){
int n,m;
        cin>>n>>m;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            cin>>res[i];
        }
        int num1;
        cin>>num1;
          for (int i = 0; i < n; i++) {
            if(i==0){
                res[i] = min(res[i],  num1-res[i]);

            }
           else if(res[i-1]>num1-res[i]){
                continue;
            }
       else{
res[i] = min(res[i],  num1-res[i]);
       } 
        // res[i] =num1-res[i];
    }
    //       for (int i = 0; i < n; i++) {
    //    cout<< res[i]<<" "; 
    // }
    // cout<<endl;

    // Check if the modified array is sorted
       cout << (is_sorted(res.begin(), res.end()) ? "YES\n" : "NO\n");

}
int main(){
    int t;
    cin>>t;
    while(t--){
        ans();

    }
    return 0;
}