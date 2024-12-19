#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long b,c,d;
    cin >> b >> c >> d;

    long long temp=c-d;
    int ans=0;

    if(c==d) {
        cout << max(0LL, b-d) << endl;
        return;
    }
    else {
        for (int i = 1; i<=sqrt(temp); i++)
        {
            if(temp%i==0) {
                if(i<=b&&i>d) ans++;
                if(i!=temp/i && temp/i>d && temp/i<=b) {
                    ans++;
                }
            }
        }
        
    }
    cout << ans;
}

int main() {
    // int t;
    // cin >> t;

    // while(t--) {
    //     solve();
    // }

    solve();
}
