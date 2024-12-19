#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;

    cin >> s;
    n = s.length();

    string a[6] = {"OSN", "ONS", "NSO", "NOS", "SON", "SNO"};

    int ans;

    for (int i = 0; i < 6; i++)
    {
        int len=0;
        for (int j = 0; j < n; j++)
        {
            if(s[j]==a[i][len%3]) {
                len++;
            }
        }
        ans = max(len, ans);
    }
    if (ans<3) {
        cout << -1;
        return;
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
