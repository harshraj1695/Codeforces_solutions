#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>result(t);
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        bool a=true;
        for(int i=0;i<n;i++){
            if(num[i]!=0){
                a=false;
                break;
            }
        }
        if(a){
            cout<<0<<endl;
            continue;
        }
        sort(num.begin(),num.end());
        bool av=true;
        for(int i=0;i<n;++i){
            if(num[i]!=i){
                av=false;
                break;
            }
        }
        if(av){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
      



    }
    


    return 0;
}