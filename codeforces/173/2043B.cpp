#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,d;cin>>n>>d;
    vector<int> ans;
    ans.push_back(1);
    if(n>=3 || d%3==0) ans.push_back(3);
    if(d==5) ans.push_back(5);
    if (d==7 || n > 2) {
        ans.push_back(7);
    }
    if(d==9||n>=6) ans.push_back(9);
    else {
        int x=1;
        for (int i = 2; i <= n; i++)
        {
            x*=i;
        }
        if((d*x)%9==0) {
            ans.push_back(9);
        }
    }
    for (int x : ans) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
