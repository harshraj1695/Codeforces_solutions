// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     vector<int> res(n);
//     vector<int> r(n);
    
//     for(int i = 0; i < n; i++){
//         cin >> res[i];
//         r[i] = res[i];
//     }
    
//     sort(r.begin(), r.end());
    
//     int diff = r[n-1] - r[0];
// int cnt = 0; 

// int i = 0, j = 0;

// while (i < n) {
//     while (j < n && r[j] - r[i] < diff) {
//         j++;
//     }
//         if (j < n && r[j] - r[i] == diff) {
//         cnt++;
//     }

//     i++;
// }

    
//     cout << diff << " " << cnt;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> res(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> res[i];
        freq[res[i]]++;
    }

    int min_beauty = *min_element(res.begin(), res.end());
    int max_beauty = *max_element(res.begin(), res.end());
    
    int diff = max_beauty - min_beauty;
    
    long long cnt =0;
    
    if (diff == 0) {
        cnt = (long long)n * (n - 1) / 2;
    } else {
        cnt = (long long)freq[min_beauty] * freq[max_beauty];
    }

    cout << diff << " " << cnt;
    return 0;
}
