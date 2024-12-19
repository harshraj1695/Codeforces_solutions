#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
        int pos = 1; 
    int sos = 2; 
    int mini = abs(a[0] - a[1]); 

    for (int i = 1; i < n; i++) {
        int m = abs(a[i] - a[(i + 1) % n]); 
        if (m < mini) {
            mini = m;
            pos = i + 1;       
            sos = (i + 2) % n;  
            if (sos == 0) sos = n; 
        }
    }

    cout << pos << " " << sos;
    return 0;
    
}