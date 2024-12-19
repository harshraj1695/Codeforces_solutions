#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0){
     int p, t;
        cin >> p >> t;

        vector<int> days(7, 0);  

        for (int i = 0; i < p; i++) {
            int start, end;
            cin >> start >> end;
            for (int j = start - 1; j < end; j++) {
                days[j]++;  
            }
        }

        bool se = false;
        bool we = false;
        bool fine = true;

        for (int i = 0; i < 7; i++) {
            if (days[i] > t * 2) {
                se = true;
            }
            if ((i == 5 || i == 6) && days[i] > 0) { 
                we = true;
            }
            if (days[i] > t * 2) {
                fine = false;
            }
        }

        if (se) {
            cout << "serious trouble" << endl;
        } else if (we) {
            cout << "weekend work" << endl;
        } else {
            cout << "fine" << endl;
        }
    }

    return 0;
}