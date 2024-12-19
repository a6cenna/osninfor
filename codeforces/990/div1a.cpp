#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].second;
    }
    int full[n];
    int best[n];
    long long all=0;
    for (int i = 0; i < n; i++)
    {
        best[i]=max(a[i].first, a[i].second);
        all+=best[i];
        full[i]=a[i].first+a[i].second;
    }
    
    long long sum=LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        sum=max(sum, all+full[i]-best[i]);
    }
    
    
    cout << sum << '\n';
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

