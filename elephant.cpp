#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=*min_element(a,a+n);
    //7cout<<mini<<endl;
    int c=count(a, a + n, mini);
    //cout<<c;
    if(c>1){
        cout<< "Still Rozdil";
        return 0;
    }else{
        for(int i=0;i<n;i++){
            if(a[i]==mini){
                cout<<i+1;
                return 0;
            }
        }
    }
}