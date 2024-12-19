#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int a=pow(2,n+1)-1;
    int curr=0;
    if(s.length()==0){
        cout<<a;
        return 0;
    }
    
    for(int I=0; I<s.size(); I++){
        if(s[I]=='L'){
            curr= curr*2;
        }
        else{
            curr= (curr *2)+1;
        }
    }
    cout<<(a-curr)+1;
    cout<<a;
}