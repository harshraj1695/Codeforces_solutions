#include<bits/stdc++.h>
using namespace std;
bool isvowel(char s){
    if(s=='a' || s=='e'||s=='i'||s=='o'|| s=='u' ||s=='y' ){
        return true;
    }else{
        return false;
    }
}
int main(){
   string s;
   cin>>s;
   //convert s to loewer case
   for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
   }
   string j;
   for(int i=0;i<s.size();i++){
     if(isvowel(s[i])){
        continue;
     }else{
        j+='.';
        j+=s[i];
     }
   }
   cout<<j;
   return 0;

}