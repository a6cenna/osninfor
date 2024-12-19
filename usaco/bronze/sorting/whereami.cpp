#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;cin>>n;
    string s;cin>>s;
    // for(int i=0;i<n;i++) {
    //     string temps=s.substr(0, i+1);
    //     bool is=true;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(s.substr(j, i+1)==temps) {
    //             is=false;
    //             break;
    //         }
    //     }
    //     if(is) {
    //         cout << i+1;
    //         return 0;
    //     }
    // }
    for (int i=1;i<=n;i++) {
        set<string> substring;
        bool is=true;
        for (int j = 0; j <= n-i; j++)
        {
            string temps=s.substr(j, i);
            if(substring.count(temps)) {
                is=false;
                break;
            }
            substring.insert(temps);
        }
        if(is) {
            cout << i;
            return 0;
        }
    }
}
