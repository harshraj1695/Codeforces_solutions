#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int p;
    cin>>p;
    int arr1[p];
    int q;
   ;
    for(int i=0;i<p;i++){
         cin>>arr1[i];
    }
    cin>>q;
     int arr2[q];
    for(int i=0;i<q;i++){
        cin>>arr2[i];
    }
  set<int> all_players;
    for (int i = 0; i < p; i++) {
        all_players.insert(arr1[i]);
    }
    for (int i = 0; i < q; i++) {
        all_players.insert(arr2[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (all_players.find(i) == all_players.end()) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}