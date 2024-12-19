#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int swap=0;
    int min=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='H'){
            count++;
            i++;
        }
    }
    for(int i=0;i<s.size();i++){
      string sb = s.substr(0+i,count+i);
        while(sb[i]!='\0'){
            if(sb[i]=='T'){
                swap++;
                i++;
            }
        }
        if(swap<min){
            min=swap;
        }
    }
    cout<<min;
    return 0;
}